#include<stdio.h>
int main() {
	float zbj=10000;
	int n;
	scanf("%d",&n);
	int i;
	for(i=1; i<=n; i++) {
		zbj*=1.003;
	}
	printf("%.2f",zbj);
	return 0;
}