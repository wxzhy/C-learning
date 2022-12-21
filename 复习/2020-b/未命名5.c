#include<stdio.h>
#include<stdlib.h>
struct WORKER {
	long ID;
	char name[10];
	float salary;
};
int main() {
	FILE *fp;
	struct WORKER w[100],tmp;
	int n=0;
	fp=fopen("worker.dat","rb");
	if(fp==NULL) {
		printf("Open file error!");
		exit(0);
	}
	while(!feof(fp))
		fread(&w[n++],sizeof(struct WORKER),1,fp);
	fclose(fp);
	n--;
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-1; j++) {
			if(w[j].salary>w[j+1].salary) {
				tmp=w[j];
				w[j]=w[j+1];
				w[j+1]=tmp;
			}
		}
	for(int i=0; i<n; i++)
		printf("%d %s %.2f\n",w[i].ID,w[i].name,w[i].salary);
	return 0;
}
