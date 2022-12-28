#include<stdio.h>
int main() {
	char s[4];
	gets(s);
	for(int i=0; i<4; i++) {
		putchar(s[i]);
		putchar(' ');
	}
	return 0;
}