#include<stdio.h>
#include<string.h>
int main() {
	char s[30];
	gets(s);
	int len=strlen(s);
	printf("%d",len);
	return 0;
}