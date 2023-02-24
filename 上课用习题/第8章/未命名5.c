#include<stdio.h>
int main() {
	char s[9]="computer";
	putchar(s[0]);
	for(int i=1; i<9; i++) {
		putchar(' ');
		putchar(s[i]);
	}
	return 0;
}
