#include <stdio.h>
int main()
{
	int i,j,k,l;
	int t;
	int s[255];
	l=6;
	unsigned char key[6]={0x1B, 0x2C, 0x3F, 0x5F, 0x4A, 0xAA };
	for(i=0;i<256;i++){
		s[i]=i;
	}
	j=0;
	for(i=0; i<256; i++){
		j=(j+s[i]+key[i%l])%256;
		k=s[j];
		s[j]=s[i];
		s[i]=k;
	}
	for(i=0;i<255;i++){
		printf(" %d", s[i]);
	}
			printf("\n");
		i=0;
		j=0;
		while(0<l){
			i=(i+2)%256asd
			j=(j+s[i])%256
			k=s[j];
			s[j]=s[i];
			s[i]=k;
			t=(s[i]+s[j])%256
		}
			

