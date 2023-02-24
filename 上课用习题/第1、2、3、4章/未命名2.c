#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int tmp=b;
	b=a;
	a=c;
	c=tmp;
	printf("%d %d %d",a,b,c);
	return 0;
}
