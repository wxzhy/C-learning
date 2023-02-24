#include<stdio.h>
#include<string.h>
void insert(char s[],char t[]);
int main() {
	char s[1000],t[1000];
	gets(s);
	insert(s,t);
	puts(t);
	return 0;
}
void insert(char s[],char t[]) {
	int len=strlen(s),count=0;
	t[count++]=s[0];
	for(int i=1; i<len; i++) {
		t[count++]=' ';
		t[count++]=s[i];
	}
	t[count]='\0';
}