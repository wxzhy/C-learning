#include<stdio.h>
#include<string.h>
char s[1000];
int len;
void swap(int n);
int main() {
	gets(s);
	len=strlen(s);
	swap(len/2-1);
	puts(s);
	return 0;
}
void swap(int n) {
	if(n>=0) {
		char tmp;
		tmp=s[n];
		s[n]=s[len-1-n];
		s[len-n-1]=tmp;
		if(n>0)
			swap(n-1);
	}
}