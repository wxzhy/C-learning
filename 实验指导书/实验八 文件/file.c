#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//test
//test
int main() {
	FILE *fp=fopen("file.c","r"),*fp2=fopen("out.c","w");
	char s[1000];
	int flag=0;
	if(fp==NULL||fp2==NULL) {
		printf("Open file error!");
		exit(0);
	}
	while(!feof(fp)) {
		fgets(s,1000,fp);
		for(int i=0; i<strlen(s)-1; i++) {
			if(s[i]=='/'&&s[i+1]=='/') {
				flag=1;
				goto next;
			} else
				fputc(s[i],fp2);
		}
		if(!flag)
			fputc(s[strlen(s)-1],fp2);
	next:
		flag=0;
	}
	fclose(fp);
	fclose(fp2);
	return 0;
}
