#include<stdio.h>
#include<math.h>
int main(void) {
	int a,b,c;
	float s,area,perimeter;
	scanf("%d %d %d",&a,&b,&c);
	perimeter=a+b+c;
	s=(a+b+c)/2.00;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area: %.2f\n",area);
	printf("perimeter: %.2f\n",perimeter);
	return 0;
}