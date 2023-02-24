#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,area,perimeter,s;
	scanf("%f %f %f",&a,&b,&c);
	if(a+b<=c||b+c<=a||a+c<=b)
		puts("These sides do not correspond to a valid triangle");
	else {
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		perimeter=a+b+c;
		printf("%.2f %.2f",area,perimeter);
	}
	return 0;
}
