#include<stdio.h>
#include<stdlib.h>
struct letter {
	char ch;
	unsigned int count;
};
void sort(struct letter a[]) {
	for(int i=0; i<25; i++)
		for(int j=0; j<25; j++) {
			if(a[i].count<a[i+1].count) {
				struct letter tmp;
				tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;
			}
		}
}
int main() {
	struct letter a[26];
	char c;
	for(int i=0; i<26; i++) {
		a[i].ch='a'+i;
		a[i].count=0;
	}
	FILE *fp;
	fp=fopen("news.txt","r");
	if(fp==NULL) {
		printf("Open file error!");
		exit(0);
	} else
		while(!feof(fp)) {
			c=fgetc(fp);
			if(c!=EOF)
				putchar(c);
			if(c>='a'&&c<='z')
				a[c-'a'].count++;
		}
	fclose(fp);
	sort(a);
	for(int i=0; i<26; i++)
		printf("%c: %d\n",a[i].ch,a[i].count);
	return 0;
}
