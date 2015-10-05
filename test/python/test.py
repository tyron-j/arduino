import serial

data = serial.Serial("com5", 9600)

def outputText():
	while (True):
		if (data.inWaiting() > 0):
			text = data.readline()
			print text