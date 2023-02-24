#include<stdio.h>
int cmpStr(char s1[],char s2[]) {
	while(*s1!='\0'&&*s2!='\0')
		if(*s1==*s2) {
			s1++;
			s2++;
		} else return  *s1-*s2;
}
int main() {
	char s1[1000],s2[1000];
	gets(s1);
	gets(s2);
	printf("%d",cmpStr(s1,s2));
	return 0;
}
