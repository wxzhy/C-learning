#include<stdio.h>
void sort(int **p,int n);
int main() {
	int a[6];
	for(int i=0; i<6; i++)
		scanf("%d",&a[i]);
	int *t=&a;
	sort(&t,6);
	for(int i=0; i<6; i++)
		printf("%d ",a[i]);
	return 0;
}
void sort(int **p,int n) {
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-1; j++) {
			if(*(*p+j)>*(*p+j+1)) {
				int tmp=*(*p+j);
				*(*p+j)=*(*p+j+1);
				*(*p+j+1)=tmp;
			}
		}
}