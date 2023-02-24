#include<stdio.h>
#include<string.h>
int main() {
	char a[100],b[100];
	gets(a);
	gets(b);
	int l1=strlen(a),l2=strlen(b);
	for(int i=0; i<l2; i++)
		a[l1+i]=b[i];
	a[l1+l2]='\0';
	puts(a);
	return 0;
}
