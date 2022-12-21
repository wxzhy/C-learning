#include<stdio.h>
unsigned long long f(int x) {
	unsigned long long s=1;
	for(int i=1; i<=x; i++)
		s*=i;
	return s;
}
int main() {
	int n;
	unsigned long long Sn=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		Sn+=f(i);
	printf("%llu",Sn);
	return 0;
}