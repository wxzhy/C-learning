#include<stdio.h>
int main() {
	float a,b;
	float result;
	char c;
	scanf("%f %f %c",&a,&b,&c);
	switch(c) {
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '*':
			result=a*b;
			break;
		case '/':
			result=a/b;
			break;
	}
	printf("%.2f",result);
	return 0;
}