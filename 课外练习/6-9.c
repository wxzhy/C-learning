#include<stdio.h>
int main() {
	int M,N;
	float x,y;
	scanf("%d %d",&M,&N);
	x=M;
	y=x;
	for(int i=1; i<N; i++) {
		x/=2;
		y+=x*2;
	}
	x/=2;
	printf("%.2f %.2f",x,y);
	return 0;
}
