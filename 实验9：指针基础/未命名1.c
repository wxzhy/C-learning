#include<stdio.h>
void swap(int *x,int *y);
int main() {
	int n,m,a[1000];
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(int i=1; i<=m; i++) {
		int x,y;
		scanf("%d %d",&x,&y);
		swap(&a[x]-1,&a[y]-1);
	}
	for(int i=0; i<n; i++)
		printf("%d\n",a[i]);
	return 0;
}
void swap(int *x,int *y) {
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}