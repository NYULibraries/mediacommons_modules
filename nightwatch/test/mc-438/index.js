var conf = require('../../nightwatch.conf.js');

module.exports = {

  beforeEach: function (client, done) {
    client.url('http://mediacommons.local/users/ana-cabral-martins', function () {
      done();
    });
  },
  
  'MC-438 - Fix search problem - words from spoke content' : function (client) {
    client.elements('css selector','li.search-result', function (result) {
      client.assert.equal(((result.value.length ) ? true : false), true)
    });
  },  

  'Finished': function (client) {
    client
      .perform(() => {
        console.log('[perform]: Finished Test:', client.currentTest.name)
      })
      .end();
  }   

  };
