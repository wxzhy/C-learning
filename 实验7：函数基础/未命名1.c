#include<stdio.h>
int narcissistic(int x);
void printN(int y);
int main() {
	int m=0,n=0;
	scanf("%d %d",&m,&n);
	for(int i=m; i<=n; i++)
		if(narcissistic(i)==1)
			printN(i);
	return 0;
}
int narcissistic(int x) {
	if(x>=100&&x<=999) {
		int a=x/100,b=(x%100)/10,c=x%10;
		if(x==a*a*a+b*b*b+c*c*c)
			return 1;
		else return 0;
	} else if(x!=10000) {
		int a=x/1000,b=(x%1000)/100,c=(x%100)/10,d=x%10;
		if(x==a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d)
			return 1;
		else return 0;
	}
	return 0;
}
void printN(int y) {
	printf("%d\n",y);
}