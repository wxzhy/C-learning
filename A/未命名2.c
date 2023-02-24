#include<stdio.h>
#include<math.h>
#include<string.h>
#define LEN strlen(s)
int convert(char s[]) {
	int f=1,n=0;
	if(s[0]=='-') {
		f=-1;
		s++;
	}
	for(int i=0; i<LEN; i++)
		n+=(s[i]-'0')*powf(10,LEN-i-1);
	n*=f;
	return n;
}
int main() {
	char s[10];
	gets(s);
	printf("%d",convert(s));
	return 0;
}
