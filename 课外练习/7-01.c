#include<stdio.h>
int main() {
	int a[20]= {0},sum=0;
	a[0]=1;
	a[1]=1;
	for(int i=1; i<20; i++)
		a[i]=a[i-1]+a[i-2];
	for(int i=0; i<20; i++)
		sum+=a[i];
	printf("%d",sum);
	return 0;
}