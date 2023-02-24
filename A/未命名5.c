#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE *fp=fopen("file.txt","w");
	if(!fp) {
		puts("Open file error!");
		exit(0);
	}
	fputs("ACBDDBACCA",fp);
	fclose(fp);
	int score=0;
	char s[11];
	gets(s);
	fp=fopen("file.txt","r");
	for(int i=0; i<10; i++)
		if(s[i]==fgetc(fp))
			score+=10;
	printf("%d",score);
	fclose(fp);
	return 0;
}
