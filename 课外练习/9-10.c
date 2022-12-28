#include<stdio.h>
#include<string.h>
int main() {
	char s[1000];
	gets(s);
	int len=strlen(s);
	for(int i=0; i<len; i++)
		if(s[i]=='z')
			s[i]='a';
		else if(s[i]>='a'&&s[i]<='y')
			s[i]++;
	puts(s);
	return 0;

}