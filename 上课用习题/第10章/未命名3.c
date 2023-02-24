#include<stdio.h>
int main() {
	char s[1000]= {'\0'},*t=s;
	gets(s);
	do {
		putchar(*t);
		t+=2;
	} while(*t!='\0');
	return 0;
}
