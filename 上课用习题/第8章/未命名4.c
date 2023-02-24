#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	int c=0;
	gets(s);
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0; i<len; i++)
		if(s[i]>'a'&&s[i]<='z')
			c++;
	printf("%d",c);
	return 0;
}
