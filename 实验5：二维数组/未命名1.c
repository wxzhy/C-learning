#include<stdio.h>
int main() {
	int n,tmp;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&arr[i][j]);
	int min=arr[0][0],max=arr[0][0],a=0,c=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++) {
			if(arr[i][j]<min) {
				min=arr[i][j];
				a=i;
			}
			if(arr[i][j]>max) {
				max=arr[i][j];
				c=i;

			}
		}
	for(int i=0; i<n; i++) {
		tmp=arr[a][i];
		arr[a][i]=arr[c][i];
		arr[c][i]=tmp;
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-1; j++)
			printf("%d ",arr[i][j]);
		printf("%d",arr[i][n-1]);
		putchar('\n');
	}
	return 0;
}