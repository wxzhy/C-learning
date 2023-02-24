#include<stdio.h>
int main() {
	for(int i=0; i<=100; i++)
		for(int j=0; j<=50; j++)
			for(int k=0; k<=20; k++)
				if(i+2*j+5*k==100)
					printf("%d %d %d\n",i,j,k);
	return 0;
}
