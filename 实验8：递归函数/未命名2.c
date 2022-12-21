#include<stdio.h>
unsigned long long fab(int x);
int main() {
	int n;
	scanf("%d",&n);
	printf("%llu\n",fab(n));
	return 0;
}
unsigned long long fab(int x) {
	unsigned long long a=1,b=1,tmp;
	if(x==1||x==2)
		return 1;
	else {
		for(int i=1; i<=x-2; i++) {
			tmp=a+b;
			a=b;
			b=tmp;
			if(b>10007)
				b-=10007;
		}
		return b;
	}
}