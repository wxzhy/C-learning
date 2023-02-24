#include<stdio.h>
#include<string.h>
int main() {
	char s[1000];
	int count=0;
	gets(s);
	for(int i=0; i<strlen(s)-1; i++) {
		if(s[i]==' '&&s[i+1]!=' ')
			count++;
	}
	printf("%d",count+1);
	return 0;
}
