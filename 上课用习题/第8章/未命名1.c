#include <stdio.h>
#include <string.h>
void copy(char *s,char *t,int m);
int main() {
	char s[1000],t[1000];
	int m;
	scanf("%s %d",s,&m);
	copy(s,t,m);
	puts(t);
	return 0;
}
void copy(char *s,char *t,int m) {
	char *p=s;
	p+=m;
	strcpy(t,p);
}