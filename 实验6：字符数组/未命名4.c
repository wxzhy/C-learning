#include<stdio.h>
#include<string.h>
int main() {
	char s[1000],t[1000]= {'\0'},c;
	gets(s);
	c=getchar();
	int len=strlen(s),poi=0;
	for(int i=0; i<len; i++) {
		if(s[i]!=c) {
			t[poi]=s[i];
			poi++;
		}
	}
	puts(s);
	puts(t);
	return 0;
}