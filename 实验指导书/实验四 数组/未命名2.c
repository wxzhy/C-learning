#include<stdio.h>
int main() {
	int a[4][6],sum;
	for(int i=0; i<3; i++)
		for(int j=0; j<5; j++)
			scanf("%d",&a[i][j]);
	for(int j=0; j<5; j++) {
		sum=0;
		for(int i=0; i<3; i++)
			sum+=a[i][j];
		sum/=3;
		a[3][j]=sum;
	}
	for(int i=0; i<4; i++) {
		sum=0;
		for(int j=0; j<5; j++)
			sum+=a[i][j];
		sum/=5;
		a[i][5]=sum;
	}
	for(int i=0; i<4; i++) {
		for(int j=0; j<6; j++)
			printf("%d ",a[i][j]);
		putchar('\n');
	}
	return 0;
}
