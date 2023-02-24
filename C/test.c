#include<stdio.h>
#include<stdlib.h>
#define SIZE sizeof(struct WORKER)
typedef struct WORKER {
	long ID; //工号
	char name[10]; //姓名
	float salary;	//月薪
	struct WORKER *next;
} WORKER ;
int main() {
	WORKER n;
	FILE *fp=fopen("workerlink.dat","wb");
	if(fp==NULL) {
		puts("Open file error!");
		exit(0);
	} else {
		scanf("%d %s %f",&n.ID,n.name,&n.salary);
		while(n.ID) {
			fwrite(&n,SIZE,1,fp);
			scanf("%d %s %f",&n.ID,n.name,&n.salary);
		}
		fclose(fp);
	}
	return 0;
}
