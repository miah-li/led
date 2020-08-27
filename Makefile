a.out:led.o
	gcc led.o
led.o:led.c
	gcc -c led.c 
