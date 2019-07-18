#include <stdio.h>

int main(int argc, char* argv[])
{ 
/*	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int x = *(A+2);
	printf("%d\n", x);
	
	return 0;
	*/
	
	int A[10]= {0,1,2,3,4,5,6,78,8,9};
	int *p = A+7;
	printf("%d\n", *p);
	
	return 0;
}
	
