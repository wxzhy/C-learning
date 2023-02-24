#include<stdio.h>
#include<string.h>
void insert(char *p) {
	char q[100];
	int t=0;
	q[t++]=p[0];
	for(int i=1; i<strlen(p); i++) {
		q[t++]=' ';
		q[t++]=p[i];
	}
	strcpy(p,q);
}
int main() {
	char p[100];
	gets(p);
	insert(p);
	puts(p);

	return 0;
}
