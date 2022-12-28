#include<stdio.h>
int main() {
	int a[3][3],b[3][3];
	scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]);
	scanf("%d %d %d",&a[1][0],&a[1][1],&a[1][2]);
	scanf("%d %d %d",&a[2][0],&a[2][1],&a[2][2]);
	for(int m=0; m<3; m++)
		for(int n=0; n<3; n++)
			b[m][n]=a[n][m];
	printf("%d %d %d \n",b[0][0],b[0][1],b[0][2]);
	printf("%d %d %d \n",b[1][0],b[1][1],b[1][2]);
	printf("%d %d %d \n",b[2][0],b[2][1],b[2][2]);
	return 0;
}