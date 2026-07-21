#include <stdio.h>
#include <time.h>

int main() {
	time_t time_sec = 60;
	char *time_str = ctime(&time_sec);
	printf("%s", time_str);
	return 0;
}
