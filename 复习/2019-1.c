#include<stdio.h>
void find(int a[],int b[][20],int i) {
	int flag=0,m=0,n=0;
	for(int j=0; j<10; j++) {
		for(int k=0; k<10; k++)
			if(a[i]==b[j][k]) {
				printf("(%d,%d)\n",j,k);
				return;
			}
	}
	printf("(-1,-1)\n");
}
int main() {
	int a[10],b[10][20];
	for(int i=0; i<10; i++)
		a[i]=i*i+2*i;
	for(int j=0; j<10; j++)
		for(int k=0; k<10; k++)
			b[j][k]=j*k+j+k+1;
	for(int i=0; i<10; i++) {
		find(a,b,i);
	}
	return 0;
}