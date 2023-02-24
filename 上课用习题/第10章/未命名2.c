#include<stdio.h>
int main() {
	char s[1000],*t=s;
	int a[5]= {0};
	gets(s);
	do {
		if(*t>='A'&&*t<='Z')
			a[0]++;
		else if(*t>='a'&&*t<='z')
			a[1]++;
		else if(*t==' ')
			a[2]++;
		else if(*t>='0'&&*t<='9')
			a[3]++;
		else a[4]++;
	} while(*(++t)!='\0');
	for(int i=0; i<5; i++)
		printf("%d ",a[i]);
	return 0;
}
