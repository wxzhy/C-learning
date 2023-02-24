#include<stdio.h>
int main() {
	unsigned long long s=1;
	int n;
	scanf("%d",&n);
	for(int i=2; i<=n; i++)
		s*=i;
	printf("%llu",s);
	return 0;
}
