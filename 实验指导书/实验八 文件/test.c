#include<stdio.h>
#include<stdlib.h>
typedef struct {
	long id;
	char name[20];
	float score;
} STUD ;
int main() {
	STUD a;
	FILE *fp=fopen("stu1.dat","wb");
	if(fp==NULL) {
		puts("Open file error!");
		exit(0);
	}
	scanf("%d %s %f",&a.id,a.name,&a.score);
	while(a.id!=0) {
		fwrite(&a,sizeof(STUD),1,fp);
		scanf("%d %s %f",&a.id,a.name,&a.score);
	}
	return 0;
}
