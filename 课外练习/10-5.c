#include<stdio.h>
int n,a[1000]= {0};
void pop(int x);
int main() {
	int t=3;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		a[i]=i;
	while(n>1) {
		if(t>n)
			t-=n;
		else {
			pop(t);
			t+=2;
		}
	}
	printf("%d",a[1]);
	return 0;

	return 0;
}
void pop(int x) {
	for(int i=x; i<=n-1; i++)
		a[i]=a[i+1];
	a[n]=0;
	n--;
}