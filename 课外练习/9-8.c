#include<stdio.h>
#define m(a,b,c) (a>b?a:b)>c?(a>b?a:b):c
float max(float a,float b,float c) {
	float s;
	s=a>b?a:b;
	s=s>c?s:c;
	return s;
}
int main() {
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	printf("%.3f\n%.3f",max(a,b,c),m(a,b,c));
	return 0;
}
