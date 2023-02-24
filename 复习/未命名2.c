#include<stdio.h>
int main() {
	int i,m,t=1,s=0;
	for(i=1; i<=101; i+=2) {
		m=i*t;
		s=s+m;
		t*=-1;
	}
	printf("%d",s);
	return 0;
}
