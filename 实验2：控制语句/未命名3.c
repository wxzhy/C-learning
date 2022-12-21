#include<stdio.h>
int GCD(int x,int y) {
	int min=x>y?y:x;
	for(int i=min; i>=1; i--)
		if(x%i==0&&y%i==0)
			return i;
}
int LCM(int x,int y) {
	int max=x>y?x:y;
	for(int i=max; i<x*y; i++)
		if(i%x==0&&i%y==0)
			return i;
}
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n%d",GCD(a,b),LCM(a,b));
	return 0;
}
