#include<stdio.h>
int main() {
	int a,b,c,x,y,z;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) {
		int tmp=a;
		a=b;
		b=tmp;
	}
	if(b>c) {
		int tmp=b;
		b=c;
		c=tmp;
	}
	if(a>b) {
		int tmp=a;
		a=b;
		b=tmp;
	}
	if(b>c) {
		int tmp=b;
		b=c;
		c=tmp;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}