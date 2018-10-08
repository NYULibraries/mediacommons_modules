var conf = require('../../nightwatch.conf.js');

module.exports = {
  tags: ['mc-xxx'],
  '@disabled': false,

  "MC-XXX - Do not display Message content-type in admin/content view" : function (client) {
    client
      .url('http://mediacommons.local/user?destination=admin/content')
      .waitForElementVisible('body', 1000)
      .waitForElementPresent('form#user-login', 1000)
      .setValue('input#edit-name', 'dlts.pa')
      .setValue('input#edit-pass', '000000')
      .saveScreenshot('mc-xxx-01.png')
      .submitForm('#user-login')
      .waitForElementVisible('body', 1000)
      .saveScreenshot('mc-xxx-02.png')
      .waitForElementPresent('.view-admin-views-node form', 1000)
      .click('.view-admin-views-node form select#edit-type option[value=message]')
      .saveScreenshot('mc-xxx-03.png')
      .submitForm('.view-admin-views-node form')
      .assert.elementPresent('.views-table .views-empty')
      .saveScreenshot('mc-xxx-04.png')
      .end();
  },

  'Finished': function (client) {
    client
      .url('http://mediacommons.local/user/logout')
      .perform(() => {
        console.log('[perform]: Finished Test:', client.currentTest.name)
      })
      .end();
  }       

};
