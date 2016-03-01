# GroveGestureRPI
This is a demo for Grove Gesture module used on RaspberryPi 2. The SDA port of Grove should connect with Pin3 in RPI. The SCL connect with Pin5. Before run the program, please make sure you have enabled the I2C of RPI.

#Enable I2C
`# vim \boot\config.txt`
Delete `#` before `device_tree_param=i2c_arm=on`

`# vim /etc/modules-load.d/raspberrypi.conf`
Add
`i2c-bcm2835`
`i2c-dev`
