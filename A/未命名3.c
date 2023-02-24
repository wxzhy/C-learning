#include<stdio.h>
#include<string.h>
#define LEN strlen(s)
void sort(char s[]) {
	for(int j=0; j<LEN-1; j++)
		for(int i=0; i<LEN-1; i++)
			if(s[i]>s[i+1]) {
				char tmp=s[i];
				s[i]=s[i+1];
				s[i+1]=tmp;
			}
}
void del(char s[]) {
	char *t;
	for(int i=0; i<LEN; i++)
		if(s[i]==s[i+1])
			strcpy(s+i, s+i+1);
}
int main() {
	char s[100];
	gets(s);
	sort(s);
	del(s);
	puts(s);
	return 0;
}
