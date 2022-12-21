#include<stdio.h>
#define swap(a,b){int tmp;tmp=a;a=b;b=tmp;}
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	swap(a,b);
	printf("%d %d",a,b);
	return 0;
}
