#include <stdio.h>

	int add(int x, int y) {
	return(x+y);
	}
	int substract(int x, int y) {
		return (x-y);
	}
	int multiply(int x, int y) {
	return (x*y);
	}
	int divede(int x, int y) {
	if(y!=0 ){
		return (x/y);
	}
		else return 0;

}
int module(int x, int y){
	return (x % y);
}
	
int main(int argc, char*argv[]) {
	int x,y, choice, result;
	int(*op[5])(int, int);
	op[0]=add;
	op[1]=substract;
	op[2]=multiply;
	op[3]=divede;
	op[4] = module;
	printf("Enter two integers: ");
	scanf("%d%d", &x, &y);
	printf("Enter 0 to add 1 to substract, 2 to multiply, 3 to divide or 4 to found module: ");
	scanf("%d", &choice);
	result = op[choice](x,y);
	printf("%d\n",result);
	return 0;
}
	
