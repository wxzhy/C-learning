#include<stdio.h>
#include<string.h>
void delchar(char *s, char c) {
	char t[1000];
	int i=0,j=0;
	while(*(s+j)!='\0') {
		if(*(s+j)!=c) {
			*(t+i)=*(s+j);
			i++;
		}
		j++;
	}
	strcpy(s,t);
}
int main() {
	char s[1000],c;
	gets(s);
	c=getchar();
	delchar(s,c);
	puts(s);
	return 0;
}
