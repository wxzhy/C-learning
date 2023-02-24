#include<stdio.h>
#include<string.h>
void concat(char a[],char b[]) {
	int len=strlen(a);
	if(strlen(b)<5) {
		for(int i=0; i<strlen(b); i++)
			a[len+i]=b[i];
		a[len+strlen(b)]='\0';
	} else {
		for(int i=0; i<5; i++)
			a[len+i]=b[i];
		a[len+5]='\0';
	}
}
int main() {
	char a[100],b[100];
	gets(a);
	gets(b);
	concat(a,b);
	puts(a);
	return 0;
}
