#include <stdio.h>

int main(int argc, char* argv[]) 
{
	int A[3] = {0x34, 0x57, 0x23};
	int *p = A+1;
	int *q = A+2;
	if (p<q) {
		printf("p<q\n");
	}
	else {
		printf("p>q\n");
	}
	return 0;
}
