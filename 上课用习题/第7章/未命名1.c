#include<stdio.h>
int main() {
	int a[5][5];
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			scanf("%d",&a[i][j]);
	for(int i=0; i<5; i++) {
		int sum=0;
		for(int j=0; j<5; j++)
			sum+=a[i][j];
		sum/=5;
		printf("%d ",sum);
	}
	return 0;
}
