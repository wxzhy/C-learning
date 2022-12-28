#include<stdio.h>
#include <string.h>
void reverse(char[]);
int main() {
	char s[100];
	gets(s);
	reverse(s);
	puts(s);
	return 0;
}
void reverse(char s[]) {
	char t[100]= {'\0'};
	int len=strlen(s);
	for(int i=0; i<len; i++)
		t[i]=s[len-i-1];
	strcpy(s,t);
}
