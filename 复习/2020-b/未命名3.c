#include<stdio.h>
#include<string.h>
#include<math.h>
long fun(char *p) {
	int len=strlen(p),n=0;
	if(p[0]=='-')
		for(int i=1; i<len; i++)
			n-=(p[i]-'0')*pow(10,len-i-1);
	else
		for(int i=0; i<len; i++)
			n+=(p[i]-'0')*pow(10,len-i-1);
	return n;
}
int main() {
	char s[20];
	gets(s);
	printf("%d",fun(s));
	return 0;
}
