#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	while(1)
	{
		int fd;
		char *buf1 = "default-on", *buf2 = "none";		
		fd = open("/sys/class/leds/red_led/trigger", O_RDWR);		
		write(fd,buf1,strlen(buf1));			
		sleep(1);		
		write(fd,buf2,strlen(buf2));
		sleep(1);
		close(fd);	
        }
        
        return 0;
}
