#include<stdio.h>
#include<string.h>
void complete(char *str,int n) {
	for(int i=n; i<100; i++)
		str[i]=str[i%n];
	str[100]='\0';
}
int main() {
	char str[101];
	gets(str);
	int len=strlen(str);
	complete(str,len);
	puts(str);
	return 0;
}
