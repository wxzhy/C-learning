#include<stdio.h>
#include<string.h>
void cat(char a[],char b[]);
int main() {
	char a[200],b[100];
	gets(a);
	gets(b);
	cat(a,b);
	puts(a);
	return 0;
}
void cat(char a[],char b[]) {
	int l1=strlen(a),l2=strlen(b);
	for(int i=0; i<=l2; i++)
		a[l1+i]=b[i];
}
