#include<stdio.h>
int main() {
	int min,max,factor;
	scanf("%d %d %d",&min,&max,&factor);
	for(int i=min; i<=max; i++)
		if(i%factor==0)
			printf("%d ",i);
	return 0;
}