#include<stdio.h>
int main() {
	int n;
	float s=10000.0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		s*=1.003;
	printf("%.2f",s);
	return 0;
}