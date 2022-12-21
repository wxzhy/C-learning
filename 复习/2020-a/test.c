#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE *fp;
	fp=fopen("input.txt","w");
	if(fp==NULL) {
		printf("Write file error!");
		exit(0);
	}
	char a=getchar();
	while(a!='#') {
		fputc(a,fp);
		a=getchar();
	}
	fclose(fp);
	return 0;
}
