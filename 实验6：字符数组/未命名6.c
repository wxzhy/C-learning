#include<stdio.h>
#include<string.h>
void lwr(char s[]) {
	int len= strlen(s);
	for(int i=0; i<len; i++) {
		if(s[i]>='A'&&s[i]<='Z')
			s[i]=s[i]-'A'+'a';
	}
}
int main() {
	char a[10],b[10];
	gets(a);
	gets(b);
	if(strlen(a)!=strlen(b))
		printf("1");
	else if(strcmp(a,b)==0)
		printf("2");
	else {
		lwr(a);
		lwr(b);
		if(strcmp(a,b)==0)
			printf("3");
		else printf("4");
	}
	return 0;
}