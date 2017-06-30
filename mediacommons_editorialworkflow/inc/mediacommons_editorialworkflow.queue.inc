<?php

/**
 * All things cron
 */

/**
 * All things queue
 */

/**
 * Implementation of hook_cron_queue_info()
 * http://api.drupal.org/api/drupal/modules%21system%21system.api.php/function/hook_cron_queue_info/7
 */
function mediacommons_editorialworkflow_cron_queue_info() {
  $queues['mediacommons_editorialworkflow_promote_user_worker'] = array(
    'worker callback' => 'mediacommons_editorialworkflow_promote_user',
    'time' => 60,
  );
  return $queues;
}

/**
 * Promote user worker (callback); add contributor role to authenticated user
 * @param array $data
 *   User ID (uid) to be associated with task. e.g., array('uid' => 2)
 */
function mediacommons_editorialworkflow_promote_user($data) {
	if (
	  isset($data['uid']) // we have a user account ID
	  && $data['uid'] != 1 // no need to proceed if user 1
	  && isset($data['sponsor']) // we have a sponsor ID
  )
	{

		$uid = $data['uid'];
		$sid = $data['sponsor'];
	  $account_roles = array();

    try {

      // load sponsor account
      $sponsor = user_load($sid);

			// sponsor is allow to promote users role
			if (user_access('promote users role', $sponsor)) {

        // load user account
        $account = user_load($uid);

        if (
          !in_array('contributor', $account->roles) // user is already a contributor?
          && (
            !in_array('administrator', $account->roles) // if user is an administrator we don't need to add him the contributor roles
            && !in_array('editor', $account->roles) // if user is an editor we don't need to add him the contributor roles
          )
        ) {

      	  // user is not a contributor; find role index and assign it to user
          $account_roles['roles'] = $account->roles;
          $account_roles['roles'][array_search('contributor', user_roles(TRUE))] = 'contributor';

          user_save($account, $account_roles);

				  // log task
				  watchdog('mediacommons_editorialworkflow', 'User @user was promoted to contributor by @sponsor.', array('@user' => $account->name, '@sponsor' => $sponsor->name), WATCHDOG_NOTICE);

				  // send notifications
          //mediacommons_editorialworkflow_mail_send(
          //  array(
          //    'email' => $account->mail,
          //    'from' => $sponsor->mail,
          //    'key' => 'contributor_promoted',
          //  )
          //);
        }
      }
    }
    catch (Exception $e) {
      drupal_set_essage($e->getMessage(), 'error');
    }
  }
}
