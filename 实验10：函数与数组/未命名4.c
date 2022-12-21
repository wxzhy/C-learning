#include<stdio.h>
int main() {
	int m,n;
	char s[1000];
	gets(s);
	scanf("%d %d",&m,&n);
	for(int i=m-1; i<m+n-1; i++)
		putchar(s[i]);
	return 0;
}