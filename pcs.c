#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		printf("parent process created zid id=%d\n",getpid());
	}
	else if(pid==0)
	{
		printf("child process created its id=%d\n",getpid());
	}
	else
	{
		printf("ever in process creation");
	}
	return 0;
}


