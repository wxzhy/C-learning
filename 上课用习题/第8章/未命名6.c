#include<stdio.h>
#include<string.h>
char max(char str[]);
int main() {
	char s[10][100],a[10];
	for(int i=0; i<10; i++) {
		gets(s[i]);
		a[i]=max(s[i]);
	}
	for(int i=0; i<10; i++) {
		putchar(a[i]);
		putchar(' ');
	}
	return 0;
}
char max(char str[]) {
	char ch=str[0];
	int l=strlen(str);
	for(int i=1; i<l; i++)
		if(str[i]>ch)
			ch=str[i];
	return ch;
}