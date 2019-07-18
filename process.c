#include <stdio.h>
#include <unistd.h> // library for creating process

int main(int argc, char* argv[]) {
	pid_t pid;
	
	switch( pid = fork() ) {
		case -1:
	perror("fork");
	break;
		case 0:
	printf("The message from parent process\n");
	break;
	default:
	printf("The message from child process\n");
} 
	return 0;
}
