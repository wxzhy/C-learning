#include<stdio.h>
void sort(int a[],int n);
void swap(int *x,int *y);
int main() {
	int n,b,a[200],c[200],count=0;
	scanf("%d %d",&n,&b);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(int i=0; i<n; i++)
		if(a[i]%b!=0)
			c[count++]=a[i];
	sort(c,count);
	for(int i=0; i<count; i++)
		if(c[i]>='A'&&c[i]<='Z')
			printf("%c ",c[i]);
		else printf("%d ",c[i]);
	return 0;
}
void sort(int a[],int n) {
	for(int j=0; j<n-1; j++)
		for(int i=0; i<n-1; i++)
			if(a[i]>a[i+1])
				swap(&a[i],&a[i+1]);
}
void swap(int *x,int *y) {
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}