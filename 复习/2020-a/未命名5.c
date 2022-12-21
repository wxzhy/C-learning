#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	char name[10];
	int id;
	float score;
} stu;
int main() {
	stu s;
	FILE *fp,*fp2;
	fp=fopen("input.txt","r");
	fp2=fopen("out.txt","w");
	if(fp==NULL) {
		printf("Read file error!");
		exit(0);
	}
	if(fp2==NULL) {
		printf("Write file error!");
		exit(0);
	}
	while(!feof(fp)) {
		fscanf(fp,"%d %s %f",&s.id,s.name,&s.score);
		if(s.score==100) {
			fprintf(fp2,"%d %s %.1f\n",s.id,s.name,s.score);
			printf("%d %s %.1f\n",s.id,s.name,s.score);
		}
	}
	fclose(fp);
	fclose(fp2);
	return 0;
}
