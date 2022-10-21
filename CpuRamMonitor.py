import psutil
import serial

serial = serial.Serial()
serial.baudrate = 9600
serial.port = "COM5" # put the arduino com port
serial.open()

while(1):
    cpu = psutil.cpu_percent(interval=1.2)
    mem = psutil.virtual_memory().percent

    if cpu < 10:
        finishcpu = "  " + str(cpu)
    elif cpu < 100:
        finishcpu = " " + str(cpu)
    else:
        finishcpu = str(cpu)

    if mem < 10:
        finishmem = "  " + str(mem)
    elif mem < 100:
        finishmem = " " + str(mem)
    else:
        finishmem = str(mem)


    serialDataToEncode = finishcpu + finishmem
    serialDatatosend = serialDataToEncode.encode("UTF-8")

    #print(serialDatatosend) # uncomment it for debuging
    serial.write(serialDatatosend)

serial.close()
