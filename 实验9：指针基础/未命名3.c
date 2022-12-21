#include<stdio.h>
void sum(int *total,int n);
int main() {
	int n,total=0;
	scanf("%d",&n);
	sum(&total,n);
	printf("%d",total);
	return 0;
}
void sum(int *total,int n) {
	for(int i=1; i<=n; i++)
		*total+=i;
}