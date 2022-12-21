#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	int score[3];
	char name[20];
	int totalScore;
} STUDENT;
void Write(STUDENT a[]) {
	FILE *fp;
	fp=fopen("in.dat","wb");
	if(fp==NULL) {
		printf("Open file error!");
		exit(0);
	}
	fwrite(a,sizeof(STUDENT),10,fp);
	fclose(fp);
}
int main() {
	system("chcp 65001>nul");
	STUDENT a[10]= {{98,12,44,"张三"},{93,88,12,"李四"},{19,89,78,"王五"},{56,94,78,"王五"},{21,90,68,"赵六"},{78,84,58,"周期"}};
	Write(a);
	return 0;
}
