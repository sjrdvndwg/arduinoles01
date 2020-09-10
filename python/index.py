from pyfirmata import Arduino, util
import time
board = Arduino('COM3')
pin_10= board.get_pin(d:10:o)
pin_11= board.get_pin(d:11:o)
pin_12= board.get_pin(d:12:o)

for x in range(15):
    
    pin_10.write(1)
    pin_12.write(1)
    
    time.sleep(1)
    
    pin_10.write(0)
    pin_12.write(0)
    
    time.sleep(1)


for x in range(150):
    pin_10.write(1)
    pin_12.write(1)
    time.sleep(0.15)
    pin_10.write(0)
    pin_12.write(0)
    time.sleep(0.15)
    pin_10.write(1)
    pin_11.write(1)
    time.sleep(0.15)
    pin_10.write(0)
    pin_11.write(0)
    time.sleep(0.15)

while true:
    pin_10.write(1)
    time.sleep(0.15)
    pin_10.write(0)
    pin_12.write(1)
    time.sleep(0.15)
    pin_12.write(0)
    pin_11.write(1)
    time.sleep(0.15)
    pin_11.write(0)
    pin_12.write(1)
    time.sleep(0.15)
    pin_12.write(0)  