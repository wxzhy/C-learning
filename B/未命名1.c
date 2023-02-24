#include<stdio.h>
int main() {
	int a,b[10],c=0;
	scanf("%d",&a);
	while(a) {
		b[c++]=a%2;
		a/=2;
	}
	for(int i=c-1; i>=0; i--)
		printf("%d",b[i]);
	return 0;
}
