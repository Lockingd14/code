#include <stdio.h>

int main(int argc, char* argv[]) 
{ 
	int i=10;
	int *pi = &i;
	int **ppi = &pi;
	int ***pppi = &ppi;
	 *pi = 20;
	 **ppi=30;
	printf( "%d\n", i);
	
	return 0;
}
