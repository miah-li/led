#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		system("echo default-on > /sys/class/leds/red_led/trigger");

		sleep(1);
		
		system("echo none > /sys/class/leds/red_led/trigger");
		
		sleep(1);
        }
        
        return 0;
}
