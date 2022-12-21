#include<stdio.h>
int x(int a,int b) {
	int min=a>b?b:a;
	for(int i=min; i>=1; i--)
		if(a%i==0&&b%i==0)
			return i;
}
int y(int a,int b) {
	int max=a>b?a:b;
	for(int i=max; i<=a*b; i++)
		if(i%a==0&&i%b==0)
			return i;
}
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d",x(a,b),y(a,b));
	return 0;
}
