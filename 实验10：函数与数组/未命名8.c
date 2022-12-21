#include<stdio.h>
#include<string.h>
int main() {
	char s[100000];
	int len,l[100000]= {0},count=0,max=0,m=0, sum = 0;
	gets(s);
	len= strlen(s);
	for(int i=0; i<len; i++)
		if(s[i]!=' ')
			l[count]++;
		else count++;
	for(int i=0; i<=count; i++)
		if(max<l[i]) {
			max=l[i];
			m=i;
		}
	for(int i=0; i<m; i++) {
		sum += l[i];
		sum++;
	}
	for(int i=0; i<max; i++)
		putchar(s[sum+i]);
	return 0;
}