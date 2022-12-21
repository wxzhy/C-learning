#include <stdio.h>
int main() {
	char a,b;
	scanf("%c",&a);
	if(a>=65&&a<=90)
		b=a+32;
	else if (a>=97&&a<=122)
		b=a-32;
	else b=a;
	printf("%c",b);
	return 0;
}