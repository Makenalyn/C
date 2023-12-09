#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t mypid;

	mypid = getpid();

	printf("%d\n", mypid);

	return (0);
}
