#include<stdio.h>
int main() {
	int i,sum=0;
	for(i=2; i<=100; i+=2)
		sum+=i;
	printf("%d",sum);
	return 0;
}