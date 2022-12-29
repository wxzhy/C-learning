#include<stdio.h>
int main() {
	for(int a=0; a<=33; a++)
		for(int b=0; b<=50; b++)
			for(int c=0; c<=200; c++)
				if(a+b+c==100&&a*3+b*2+c*0.5==100.0)
					printf("%d %d %d\n",a,b,c);
	return 0;
}