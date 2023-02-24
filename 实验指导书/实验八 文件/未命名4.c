#include<stdio.h>
#include<stdlib.h>
typedef struct {
	long id;
	char name[20];
	float score;
} STUD ;
int main() {
	STUD a;
	int count=0;
	FILE *fp1=fopen("stu1.dat","rb"),*fp2=fopen("stu2.dat","wb");
	if(fp1==NULL||fp2==NULL) {
		puts("Open file error!");
		exit(0);
	}
	while(!feof(fp1)) {
		fread(&a,sizeof(STUD),1,fp1);
		if(a.score<60) {
			fwrite(&a,sizeof(STUD),1,fp2);
			count++;
		}
	}
	printf("%d",count);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
