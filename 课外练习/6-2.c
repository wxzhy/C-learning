#include<stdio.h>
#include<string.h>
int main() {
	char s[1000];
	int l,a=0,b=0,c=0,d=0;
	gets(s);
	l=strlen(s);
	for(int i=0; i<l; i++) {
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
			a++;
		else if(s[i]>='0'&&s[i]<='9')
			b++;
		else if(s[i]==' ')
			c++;
		else
			d++;
	}
	printf("%d %d %d %d",a,b,c,d);
	return 0;
}
