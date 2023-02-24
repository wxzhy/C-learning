#include<stdio.h>
int Prime(int n) {
	for(int i=2; i<n; i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main() {
	int count=0;
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i=m; i<=n; i++)
		if(Prime(i))
			count++;
	printf("%d",count);
	return 0;
}
