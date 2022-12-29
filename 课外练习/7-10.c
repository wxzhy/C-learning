#include<stdio.h>
#define N 4
void fsum(int a[N][N], int i, int j, int b[2]);
int main() {
	int a[4][4],i,j,b[2]= {0};
	for(int s=0; s<N; s++)
		for(int t=0; t<N; t++)
			scanf("%d",&a[s][t]);
	getchar();
	scanf("%d %d",&i,&j);

	for(int s=0; s<N; s++) {
		for(int t=0; t<N; t++)
			printf("%d ",a[s][t]);
		putchar('\n');
	}
	fsum(a,i,j,b);
	printf("%d\n%d",b[0],b[1]);
	return 0;
}
void fsum(int a[N][N], int i, int j, int b[2]) {
	for(int x=0; x<N; x++)
		b[0]+=a[i][x];
	for(int y=0; y<N; y++)
		b[1]+=a[y][j];
}