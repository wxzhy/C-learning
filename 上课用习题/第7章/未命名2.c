#include<stdio.h>
int main() {
	int c[3][4],a[12];
	for(int i=0; i<3; i++)
		for(int j=0; j<4; j++)
			scanf("%d",&c[i][j]);
	for(int i=0; i<3; i++)
		for(int j=0; j<4; j++)
			a[4*i+j]=c[i][j];
	for(int i=0; i<12; i++)
		printf("%d ",a[i]);
	return 0;
}
