#include<stdio.h>
int len(char *s) {
	int l=0;
	while(*s++!='\0')
		l++;
	return l;
}
int main() {
	char s[1000];
	gets(s);
	printf("%d",len(s));
	return 0;
}
