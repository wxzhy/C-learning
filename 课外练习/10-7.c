#include<stdio.h>
int main() {
	int m,n;
	char s[1000];
	scanf("%d",&n);
	scanf("%s",s);
	scanf("%d",&m);
	for(int i=m-1; i<n; i++)
		putchar(s[i]);
	return 0;
}