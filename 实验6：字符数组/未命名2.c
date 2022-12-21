#include<stdio.h>
#include<string.h>
int main() {
	char s[1000];
	gets(s);
	int len=strlen(s);
	for(int i=0; i<len/2; i++) {
		int tmp=s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=tmp;
	}
	puts(s);
	return 0;
}