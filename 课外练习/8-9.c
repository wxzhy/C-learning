#include<stdio.h>
#include<string.h>
int main() {
	void p(char[],int[]);
	char s[100];
	int a[4]= {0,0,0,0};
	gets(s);
	p(s,a);
	for(int i=0; i<4; i++)
		printf("%d ",a[i]);
	return 0;
}
void p(char s[100],int a[5]) {
	for(int i=0; i<strlen(s); i++)
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
			a[0]++;
		else if(s[i]>='0'&&s[i]<='9')
			a[1]++;
		else if(s[i]==' ')
			a[2]++;
		else a[3]++;
}