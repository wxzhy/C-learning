#include<stdio.h>
#include<stdlib.h>
struct WORKER {
	long ID;
	char name[10];
	float salary;
};
int main() {
    FILE *fp;
	struct WORKER w;
	fp=fopen("worker.dat","wb");
	if(fp==NULL) {
		printf("Open file error!");
		exit(0);
	}
	scanf("%d",&w.ID);
	while(w.ID!=0) {
		scanf("%s %f",w.name,&w.salary);
		fwrite(&w,sizeof(struct WORKER),1,fp);
		scanf("%d",&w.ID);
	}
	fclose(fp);
	return 0;
}
