
"use strict";

let Gpgst = require('./Gpgst.js');
let Sentence = require('./Sentence.js');
let Gpgsa = require('./Gpgsa.js');
let Gpgsv = require('./Gpgsv.js');
let Gprmc = require('./Gprmc.js');
let Gpgga = require('./Gpgga.js');
let GpgsvSatellite = require('./GpgsvSatellite.js');

module.exports = {
  Gpgst: Gpgst,
  Sentence: Sentence,
  Gpgsa: Gpgsa,
  Gpgsv: Gpgsv,
  Gprmc: Gprmc,
  Gpgga: Gpgga,
  GpgsvSatellite: GpgsvSatellite,
};
