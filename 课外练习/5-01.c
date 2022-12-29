#include<stdio.h>
int isprime(int x);
int main() {
	int a[100]= {0},count=0;
	for(int i=100; i<=200; i++) {
		if(isprime(i)==1) {
			a[count]=i;
			count++;
		}
	}
	for(int i=0; i<count; i++) {
		printf("%d ",a[i]);
		if((i+1)%8==0)
			putchar('\n');
	}
	putchar('\n');
	printf("%d ",count);
	return 0;
}
int isprime(int x) {
	for(int i=2; i<x; i++)
		if(x%i==0)
			return 0;
	return 1;
}