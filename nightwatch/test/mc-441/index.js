/**
 * See: https://jira.nyu.edu/jira/browse/MC-441
 * Fix search problem: user profile, reviewer
 */
var conf = require('../../nightwatch.conf.js');

module.exports = {
  tags: ['MC-441'],
  '@disabled': false,

  "MC-441 - I should not see reviews in seach results" : function (client) {
    client
      .url('http://mediacommons.local/intransition/search/site/pirate')
      .waitForElementVisible('body', 1000)
      .assert.elementNotPresent('.node-review')
      .end();      
  },

  'Finished': function (client) {
    client
      .perform(() => {
        console.log('[perform]: Finished Test:', client.currentTest.name)
      })
      .end();
  }       

};
