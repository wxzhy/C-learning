#include <stdio.h>
int main() {
	char s[6];
	int n=0;
	gets(s);
	for(int i=0; i<5; i++) {
		if(s[i]!='\0')
			n++;
	}
	printf("%d\n",n);
	for(int i=0; i<n-1; i++) {
		printf("%c ",s[i]);
	}
	printf("%c\n",s[n-1]);
	for(int j=n-1; j>=0; j--) {
		printf("%c",s[j]);
	}
	return 0;
}