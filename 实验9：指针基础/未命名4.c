#include<stdio.h>
void f(int *total,int n);
int main() {
	int n,total=1;
	scanf("%d",&n);
	f(&total,n);
	printf("%d",total);
	return 0;
}
void f(int *total,int n) {
	for(int i=1; i<=n; i++)
		(*total)*=i;
}