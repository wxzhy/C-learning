#include<stdio.h>
int main() {
	int n,max,min,x=0,y=0;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	max=a[0][0];
	min=a[0][0];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++) {
			if(a[i][j]>max) {
				max=a[i][j];
				x=i;
			}
			if(a[i][j]<min) {
				min=a[i][j];
				y=i;
			}
		}
	for(int i=0; i<n; i++) {
		int tmp=a[x][i];
		a[x][i]=a[y][i];
		a[y][i]=tmp;
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			printf("%d ",a[i][j]);
		putchar('\n');
	}
	return 0;
}
