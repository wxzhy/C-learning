#include<stdio.h>
int main() {
	int n,a=1,b=1;
	scanf("%d",&n);
	for(int i=1; i<n-1; i++) {
		int sum=a+b;
		if(sum>10007)
			sum-=10007;
		a=b;
		b=sum;
	}
	printf("%d",b%10007) ;
	return 0;
}