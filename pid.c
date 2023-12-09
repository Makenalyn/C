#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t mypid;
	pid_t parentpid;

	mypid = getpid();
	parentpid = getppid();

	printf("child pid: %d\n", mypid);
	printf("Parent pid: %d\n", parentpid);

	return (0);
}
