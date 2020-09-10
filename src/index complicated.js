const { Board } = require("johnny-five");
// const led01= 10;
// const led02 = 9;
// const led03 = 8;
// const led04 = 7;
var leds = [10, 9, 8, 7];
// Johnny-Five will try its hardest to detect the port for you,
// however you may also explicitly specify the port by passing
// it as an optional property to the Board constructor:
const board = new Board({
  port: "COM3"
});

// The board's pins will not be accessible until
// the board has reported that it is ready
board.on("ready", () => {
  var i = 0;
  for(i = 0; i <leds[i]; i++){
    board.pinMode(leds[i], board.MODES.OUTPUT);
  }
  // board.pinMode(10, board.MODES.OUTPUT);
  // board.pinMode(9, board.MODES.OUTPUT);
  // board.pinMode(8, board.MODES.OUTPUT);
  // board.pinMode(7, board.MODES.OUTPUT);
  var i;
  var waittime = 1000;
  while (true) {
    blinkon();
    wait(waittime);
    blinkoff();
    wait(waittime);
  }
  function blinkon() {
  var i = 0;
  for(i = 0; i <leds[i]; i++){
    board.digitalWrite(leds[i], board.pins[leds[i]].value, 1);
  }
    // board.digitalWrite(led01, board.pins[led01].value, 1);
    // board.digitalWrite(led02, board.pins[led01].value, 1);
    // board.digitalWrite(led03, board.pins[led01].value, 1);
    // board.digitalWrite(led04, board.pins[led01].value, 1);

  }
  function blinkoff() {
    var i = 0;
    for(i = 0; i <leds[i]; i++){
      board.digitalWrite(leds[i], board.pins[leds[i]].value, 0);
    } 
    // board.digitalWrite(led01, board.pins[led01].value, 0);
    // board.digitalWrite(led02, board.pins[led01].value, 0);
    // board.digitalWrite(led03, board.pins[led01].value, 0);
    // board.digitalWrite(led04, board.pins[led01].value, 0);
  }

  function wait(timeout) {
    setTimeout(timeout);
  }
});