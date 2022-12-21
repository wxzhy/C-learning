#include<stdio.h>
int main() {
	int a[3][4],max[3]= {0},sum;
	for(int i=0; i<3; i++)
		for(int j=0; j<4; j++)
			scanf("%d",&a[i][j]);
	for(int i=0; i<3; i++)
		for(int j=0; j<4; j++)
			if(max[i]<a[i][j])
				max[i]=a[i][j];

	sum=max[0]+max[1]+max[2];
	printf("%d",sum);
	return 0;
}