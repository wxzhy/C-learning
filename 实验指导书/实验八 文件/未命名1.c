#include<stdio.h>
#include<stdlib.h>
int main() {
	int a=0,b=0,c=0;
	char ch;
	FILE *fp=fopen("file.txt","r");
	if(!fp) {
		printf("Open file error!");
		exit(0);
	}
	while(!feof(fp)) {
		ch=fgetc(fp);
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
			a++;
		else if(ch>='0'&&ch<='9')
			b++;
		else c++;
	}
	fclose(fp);
	printf("%d %d %d",a,b,c);



	return 0;
}
