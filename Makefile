a.out:led.o
	gcc led.o
led.o:led.c
	gcc -c led.c 
led1.out:led1.o
	gcc led1.o
led1.o:led1.c
	gcc -c led1.c 
