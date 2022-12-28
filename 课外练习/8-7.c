#include<stdio.h>
#include<string.h>
int main() {
	char s[1000],t[200];
	int len,p=0;
	gets(s);
	len=strlen(s);
	for(int i=0; i<len; i++)
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			t[p++]=s[i];
	t[p]='\0';
	puts(t);
}