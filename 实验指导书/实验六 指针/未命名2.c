#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	char s[5];
	int n=0;
	gets(s);
	for(int i=0; i<strlen(s); i++)
		n+=(s[i]-'0')*pow(10,strlen(s)-i-1);
	printf("%d",n);
	return 0;
}
