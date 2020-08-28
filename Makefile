led: led.o
	gcc -o led led.o
led.o: led.c
	gcc -c led.c
led1: led1.o
	gcc -o led1 led1.o
led1.o:
	gcc -c led1.c
