#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {

	while(1) {

		long time_sec = time(NULL);
		char *time_str = ctime(&time_sec);
		printf("%s", time_str);

		struct timespec ts;
		clock_gettime(CLOCK_REALTIME, &ts);
		printf("\x1b[1F");
		printf("\x1b[2K");
		nanosleep(1000000000);
	}


	

	
	return 0;
}
