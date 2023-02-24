#include<stdio.h>
#include<math.h>
int main() {
	int n,a;
    unsigned long long sum=0,t=0;
	scanf("%d %d",&a,&n);
	for(int i=0; i<n; i++) {
		t+=a*powf(10,i);
		sum+=t;
	}
	printf("%llu",sum);
	return 0;
}
