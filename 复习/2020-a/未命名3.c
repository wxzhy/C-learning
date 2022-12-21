#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001>nul");
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a+b<=c||b+c<=a||c+a<=b)
		printf("不构成三角形");
	else {
		if(a==b||b==c||c==a) {
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
				printf("等腰直角三角形");
				else if(a==b&&b==c)
					printf("等边三角形");
				else
					printf("等腰三角形");
		} else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("直角三角形");
		else
			printf("普通三角形");
	}

	return 0;
}
