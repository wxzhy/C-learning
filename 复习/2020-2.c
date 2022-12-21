#include<stdio.h>
#include<string.h>
void del(char a[],char ch) {
	int len=strlen(a);
	for(int i=0; i<len; i++)
		if(a[i]==ch) {
			for(int j=i; j<len; j++)
				a[j]=a[j+1];
			i--;
		}
}
int main() {
	char a[1000],b[100];
	int i=0;
	gets(a);
	gets(b);
	while(b[i]!='\0') {
		del(a,b[i]);
		i++;
	}
	puts(a);
	return 0;
}
