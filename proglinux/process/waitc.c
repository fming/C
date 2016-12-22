#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	char *message;
	int n;
	int exit_code;
		
	printf("fork program starting\n");	
	pid = fork(); // return the child process
	
	switch(pid)
	{
		case -1:
			perror("fork failed.");
			exit(1);
		case 0: // when create the new process, actual the pid is not set
			message = "This is the child";
			n = 5;
			exit_code = 37;
			break;
		default: // pid is set to child process id
			message = "This is the parent";
			n = 3;
			exit_code = 0;
			break;
	}
	
	for(;n > 0; n--) {
		puts(message);
		sleep(1);
	}
	
	if(pid != 0) // not child item
	{
		int stat_val;
		pid_t child_pid;
		child_pid = wait(&stat_val); // equals to waitpid(-1, &status, 0), http://www.tutorialspoint.com/unix_system_calls/wait.htm
		
		printf("Child has finished: PID = %d\n", child_pid);
		if(WIFEXITED(stat_val)) //if child process exit normally, return a non-zero value
		{
			printf("Child exited with code %d\n", WEXITSTATUS(stat_val)); // if WIFEXITED is not zero, return exit code of child process
		}
		else
		{
			printf("Child terminated abnormally\n");
		}		
	}
	
	exit(exit_code);
}
