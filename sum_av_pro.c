#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i,j,k;
	printf("Input three different integers:\n");
	scanf("%d%d%d", &i, &j, &k);
	printf("Sum is %d\n", i+j+k);
	printf("Average is %d\n", ((i+j+k)/3));
	printf("Product is %d\n", (i*j*k));
	
	if ((i>j) && (i>k)) {
		printf("Largest is %d\n", i);
	}
	if ((j>i) && (j>k)) {
		printf("Largest is %d\n", j);
		}
	if ((k>i) && (k>j)) {
		printf("Largest is %d\n", k);
		}
		
		if ((i>j) && (j>k)) {
		printf("Smallest is %d\n", k);
		}
		if ((j>i) && (k>i)) {
		printf("Smallest is %d\n", i);
		}
		if ((k>i) && (i>j)) {
		printf("Largest is %d\n", j);
		}
	return 0;
}
