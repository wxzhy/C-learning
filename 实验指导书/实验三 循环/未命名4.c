#include<stdio.h>
int main() {
	int m,n,s=0,t=0;
	scanf("%d %d",&m,&n);
	for(int i=m; i<=n; i++) {
		s=0;
		t=i;
		while(t) {
			s+=(t%10)*(t%10)*(t%10);
			t/=10;
		}
		if(s==i)
			printf("%d ",i);
	}
	return 0;
}
