#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
	while(1) {
		printf("\x1b[1F");
		printf("\x1b[2K");
		long time_sec = time(NULL);
		//printf("%lu\n", time_sec);
		char *time_str = ctime(&time_sec);
		printf("%s", time_str);
		usleep(100000);
	}
	
	return 0;
}
