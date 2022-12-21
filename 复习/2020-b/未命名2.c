#include<stdio.h>
#define MAX 100
int fun(int lim,int aa[MAX]) {
	int num=0,i,j;
	for(i=2; i<=lim; i++) {
		for(j=2; j<i; j++)
			if(i%j==0)
				break;
		if(j==i)
			aa[num++]=i;
	}
	return num;
}
int main() {
	int lim=100,n=0,aa[MAX];
	n=fun(lim,aa);
	printf("%d\n",n);
	for(int i=0; i<n; i++)
		printf("%d ",aa[i]);
	return 0;
}
