#include<stdio.h>
#include<stdlib.h>
struct stu {
	long no;
	char name[20];
	int age;
	int score[7];
	int total;
};

int main() {
	struct stu s,t;
	int sum;
	FILE *fp=fopen("student.dat","w");
	if(!fp) {
		puts("Open file error!");
		exit(0);
	}
	scanf("%d",&s.no);
	while(s.no>=0) {
		sum=0;
		scanf("%s %d",s.name,&s.age);
		for(int i=0; i<7; i++) {
			scanf("%d",&s.score[i]);
			sum+=s.score[i];
		}
		s.total=sum;
		fwrite(&s,sizeof(struct stu),1,fp);
		scanf("%d",&s.no);
	}
	fclose(fp);
	fp=fopen("student.dat","r");
	if(!fp) {
		puts("Open file error!");
		exit(0);
	}
	t.total=0;
	while(!feof(fp)) {
		fread(&s,sizeof(struct stu),1,fp);
		if(s.total>t.total)
			t=s;
	}
	fclose(fp);
	printf("%d %s %d ",t.no,t.name,t.age);
	for(int i=0; i<7; i++)
		printf("%d ",t.score[i]);
	printf("%d",t.total);
	return 0;
}
