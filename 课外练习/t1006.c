#include<stdio.h>
void sort(int a[],int n);
void swap(int *x,int *y);
int main() {
	int n,a[200];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	sort(a,n);
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
void sort(int a[],int n) {
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-1; j++)
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
}
void swap(int *x,int *y) {
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}