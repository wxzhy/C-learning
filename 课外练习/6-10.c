#include<stdio.h>
int main() {
	int N,x=1;
	scanf("%d",&N);
	for(int i=1; i<N; i++) {
		x=(x+1)*2;
	}
	printf("%d",x);
	return 0;
}
