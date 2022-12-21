#include<stdio.h>
long long fac(int x);
int main() {
	int n;
	scanf("%d",&n);
	printf("%lld",fac(n));
	return 0;
}
long long fac(int x) {
	if(x==0||x==1)
		return 1;
	else
		return x*fac(x-1);
}