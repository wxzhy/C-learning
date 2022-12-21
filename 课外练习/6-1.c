#include<stdio.h>
int main() {
	int m,n,a,b;
	int max,min,i,j;
	scanf("%d %d",&m,&n);
	a=m>n?n:m;
	for(i=a; i>=1; i--) {
		if(m%i==0&&n%i==0) {
			max=i;
			break;
		}
	}
	b=m>n?m:n;
	for(j=b; j<=(m*n); j++) {
		if(j%m==0&&j%n==0) {
			min=j;
			break;
		}
	}
	printf("%d %d",max,min);
	return 0;
}