#include<stdio.h>
#include<math.h>
int main() {
	char s[5],*t=s;
	int x=0,l=0;
	gets(s);
	do l++;
	while(*++t!='\0');
	for(int i=0; i<l; i++)
		x+=(*(s+i)-'0')*pow(10,l-1-i);
	printf("%d",x);
	return 0;
}
