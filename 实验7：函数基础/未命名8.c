#include<stdio.h>
int yzh(int n);
int main() {
	int x;
	scanf("%d",&x);
	for(int a=1; a<x; a++) {
		int b=yzh(a);
		if(yzh(b)==a&&a!=b)
			if(a<=b)
				printf("%d %d\n",a,b);

	}
	return 0;
}
int yzh(int n) {
	int sum=0;
	for(int i=1; i<n; i++)
		if(n%i==0)
			sum+=i;
	return sum;
}