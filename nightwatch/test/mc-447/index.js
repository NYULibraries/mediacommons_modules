var conf = require('../../nightwatch.conf.js');

module.exports = {
  
  'MC-447 - Click username link in a serch result should take you that user profile' : function (client) {
      client
      .url('http://mediacommons.local/fieldguide/search/site/art')
      .waitForElementVisible('.mc-searchresults .search-result .peoplelist .p-name a', 1000)
      .click('.mc-searchresults .search-result .peoplelist .p-name a')
      .pause(1000)
      .assert.urlContains('/user/')
      .assert.containsText('h2.contribution-type', 'As contributor')
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
