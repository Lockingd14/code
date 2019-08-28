#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	printf("Enter number: c");
	scanf("%d", &i);
	
if (i%2 == 0) {
	printf("The number is even.\n");	
	}	
if (i%2 != 0) {
	printf("The number is uneven.\n");
	}
	
	return 0;
}
