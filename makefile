CC=gcc
CFLAGS = -c -std=c99
MCMODEL = -mcmodel=large

#CREATE BIN AND BUILD FOLDERS TO SAVE THE COMPILED FILES DURING RUNTIME
 $(shell mkdir -p bin)
 $(shell mkdir -p build)

#TARGET TO COMPILE ALL THE TESTS TOGETHER
all:Project-SYSC5709W
	
Project-SYSC5709W: main.o selectseason.o validateinput.o checkTemperature.o startCooling.o startHeating.o changeintemperature.o delay.o 
	$(CC) -g -o bin/MAIN build/main.o build/selectseason.o build/validateinput.o build/checkTemperature.o build/startCooling.o build/startHeating.o build/changeintemperature.o build/delay.o 

main.o: src/main.c
	$(CC) -g -c $(MCMODEL) src/main.c -o build/main.o

selectseason.o: src/selectseason.c
	$(CC) -g -c $(MCMODEL) src/selectseason.c -o build/selectseason.o

validateinput.o: src/validateInput.c
	$(CC) -g -c $(MCMODEL) src/validateinput.c -o build/validateinput.o

checkTemperature.o: src/checkTemperature.c
	$(CC) -g -c $(MCMODEL) src/checkTemperature.c -o build/checkTemperature.o

startCooling.o: src/startCooling.c
	$(CC) -g -c $(MCMODEL) src/startCooling.c -o build/startCooling.o

startHeating.o: src/startHeating.c
	$(CC) -g -c $(MCMODEL) src/startHeating.c -o build/startHeating.o

changeintemperature.o: src/changeintemperature.c
	$(CC) -g -c $(MCMODEL) src/changeintemperature.c -o build/changeintemperature.o
	
delay.o: src/delay.c
	$(CC) -g -c $(MCMODEL) src/delay.c -o build/delay.o
	
#CLEAN COMMANDS
clean:	
	rm -r build
	rm -r bin
