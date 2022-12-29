#include<stdio.h>
#define N 4
#define M 5
int sumBorder(int a[][M]) ;
int main() {
	int a[N][M];
	for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
			scanf("%d",&a[i][j]);

	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++)
			printf("%d ",a[i][j]);
		putchar('\n');
	}
	printf("%d",sumBorder(a));
	return 0;
}
int sumBorder(int a[][M]) {
	int sum=0;
	for(int i=0; i<M; i++)
		sum+=a[0][i]+a[N-1][i];
	for(int i=1; i<N-1; i++)
		sum+=a[i][0]+a[i][M-1];
	return sum;
}