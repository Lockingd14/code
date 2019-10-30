#include <stdio.h>

void say_FUCKSOCIETY(int l){
	int k;
	for(k = 0; k < l; k++){
		printf("FUCKSOCIETY\n");
	}
}

int main(int atgc, char*argv[]){
	void(*fptr)(int);
	fptr = say_FUCKSOCIETY;
		fptr(001);

return 0;
}
