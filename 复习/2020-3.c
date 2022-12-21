#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	int score[3];
	char name[20];
	int totalScore;
} STUDENT;
void Read(STUDENT a[]) {
	FILE *fp;
	fp=fopen("in.dat","rb");
	if(fp==NULL) {
		printf("Open file error!");
		exit(0);
	}
	fread(a,sizeof(STUDENT),10,fp);
	fclose(fp);
}
void Write(STUDENT a[]) {
	FILE *fp;
	fp=fopen("out.dat","wb");
	if(fp==NULL) {
		printf("Open file error!");
		exit(0);
	}
	fwrite(a,sizeof(STUDENT),10,fp);
	fclose(fp);
}
int main() {
	system("chcp 65001>nul");
	STUDENT a[10],tmp;
	Read(a);
	for(int i=0; i<10; i++)
		a[i].totalScore=a[i].score[0]+a[i].score[1]+a[i].score[2];
	for(int i=0; i<9; i++)
		for(int j=0; j<9; j++)
			if(a[j].totalScore>a[j+1].totalScore) {
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
	for(int i=0; i<10; i++)
		printf("%d %d %d %s %d\n",a[i].score[0],a[i].score[1],a[i].score[2],a[i].name,a[i].totalScore);
	Write(a);
	return 0;
}
