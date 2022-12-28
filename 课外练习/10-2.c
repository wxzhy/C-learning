#include<stdio.h>
#include<string.h>
void swap(char x[],char y[]);
int main() {
	char a[100]= {'\0'},b[100]= {'\0'},c[100]= {'\0'};
	gets(a);
	gets(b);
	gets(c);
	if(strcmp(a,b)>0)
		swap(a,b);
	if(strcmp(b,c)>0)
		swap(b,c);
	if(strcmp(a,b)>0)
		swap(a,b);
	if(strcmp(b,c)>0)
		swap(b,c);
	puts(a);
	puts(b);
	puts(c);
	return 0;
}
void swap(char x[],char y[]) {
	char tmp[100];
	strcpy(tmp,x);
	strcpy(x,y);
	strcpy(y,tmp);
}