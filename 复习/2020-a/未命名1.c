#include<stdio.h>
#include<string.h>
int main() {
	int len,pos=0,a[100]= {0},max=0;
	char s[1000],ch;
	gets(s);
	len=strlen(s);
	for(ch='a'; ch<='z'; ch++) {
		if(strchr(s,ch)!=NULL)
			a[pos]++;
		else
			a[++pos]++;
	}
	for(ch='A'; ch<='Z'; ch++) {
		if(strchr(s,ch)!=NULL)
			a[pos]++;
		else
			a[++pos]++;
	}
	for(int i=0; i<=pos; i++) {
		max=a[i]>max?a[i]:max;
	}
	printf("%d",max);
	return 0;
}