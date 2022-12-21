#include <stdio.h>
#include <string.h>
int n;
void convert_Sentence(char (*pStr)[200]);
void lwr(char ch[]);
int main() {
	char c[100][200];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
		gets(*(c + i));
	convert_Sentence(c);
	for (int i = 0; i < n; i++)
		puts(*(c + i));
	return 0;
}
void convert_Sentence(char (*pStr)[200]) {
	for (int i = 0; i < n; i++) {
		lwr(*(pStr + i));
		**(pStr + i) = **(pStr + i)+'A'-'a';
	}
}
void lwr(char ch[]) {
	int i=0;
	while(ch[i]!='\0') {
		if(ch[i]>='A'&&ch[i]<='Z')
			ch[i]=ch[i]+'a'-'A';
		i++;
	}
}