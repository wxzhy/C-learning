#include<stdio.h>
int main() {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int min=a;
	min=a<b?a:b;
	min=min<c?min:c;
	min=min<d?min:d;
	printf("%d",min);
	return 0;
}
