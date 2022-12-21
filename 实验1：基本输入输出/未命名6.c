#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a)
		printf("不能构成三角形");
	else if(a==b&&b==c)
		printf("等边三角形");
	else if((a==b||b==c||a==c)&&(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b))
		printf("等腰直角三角形") ;
	else if(a==b||b==c||a==c)
		printf("等腰三角形") ;
	else if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
		printf("直角三角形") ;
	else
		printf("一般三角形");
	return 0;
}