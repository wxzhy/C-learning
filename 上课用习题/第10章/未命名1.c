#include<stdio.h>
#include<string.h>
int main() {
	char s[3][100],*t[3]= {s[0],s[1],s[2]};
	for(int i=0; i<3; i++)
		gets(*(s+i));
	for(int j=0; j<2; j++)
		for(int i=0; i<2; i++)
			if(strcmp(t[i],t[i+1])>0) {
				char *tmp;
				tmp=t[i];
				t[i]=t[i+1];
				t[i+1]=tmp;
			}
	for(int i=0; i<3; i++)
		puts(t[i]);
	return 0;
}