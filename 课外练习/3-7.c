#include<stdio.h>
#include<string.h>
int main() {
	char s[20];
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0; i<len; i++)
		s[i]+=4;
	printf("%s",s);
	return 0;
}
