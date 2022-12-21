#include <stdio.h>
int main() {
	int n,sum;
	scanf("%d",&n);
	switch (n) {
		case 1:
			sum=0;
			break;
		case 2:
			sum=0;
			break;
		case 3:
			sum=1;
			break;
		default: {
				int x[30];
				x[0]=0;
				x[1]=0;
				x[2]=1;
				for(int i=4; i<=n; i++) {
					x[i-1]=x[i-2]+x[i-3]+x[i-4];
					sum+=x[i-1];
				}
			}
			break;
	}
	printf("%d",sum);
	return 0;
}