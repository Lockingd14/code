#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int N;
	printf("Enter size of array to create: ");
	scanf("%d", &N);
	
	for(int k = 0; k < 1000; k++) 
	{
		int *A = (int *)malloc(N*sizeof(int));
		if (NULL==A) {
		printf("OS did not gave memory. Exit...\n");
			exit(1);
		}
	for (int i=0; i < N; i++) {
		A[i] = i;
		free(A);
	 }
}

	int *A = (int *)malloc(N*sizeof(int));
	 if (NULL == A)/*pamyati ne dali */ {
			printf("OS did not gave memory. Exit...\n");
			exit(1);
		}
	for (int i=0; i < N; i++) {
		A[i] = i;
	 }
	 printf("Array A successfully created!\n"); 
	system("pause"); //pause for waiting
	 char *B = (char *)malloc(N*sizeof(int));
	 if (NULL == B)/*pamyati ne dali */ {
			printf("OS did not gave memory. Exit...\n");
			exit(1);
		}
	for (int i=0; i < N; i++) {
		B[i] = i;
	 }
	printf("Array B successfully created!\n"); 
	system("pause"); //pause for waiting
	
	return 0;
}
	
	
	
	
