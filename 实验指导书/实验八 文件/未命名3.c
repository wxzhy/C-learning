#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[1000],b=0;
	FILE *fp1=fopen("a1.txt","r"),*fp2=fopen("a2.txt","r"),*fp3=fopen("a3.txt","w");
	if(fp1==NULL||fp2==NULL||fp3==NULL) {
		printf("Open file error!");
		exit(0);
	}
	while(!feof(fp1))
		fscanf(fp1,"%d",&a[b++]);
	while(!feof(fp2))
		fscanf(fp2,"%d",&a[b++]);
	for(int i=0; i<b-1; i++)
		for(int j=0; j<b-1; j++) {
			if(a[j]>a[j+1]) {
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	for(int i=0; i<b; i++)
		fprintf(fp3,"%d\n",a[i]);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
