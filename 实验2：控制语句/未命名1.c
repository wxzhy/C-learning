#include<stdio.h>
int main() {
	int n,i;
	scanf("%d",&n);
	i=n%5;
	if(i>=1&&i<=3)
		printf("Fishing in day %d",n);
	else if(n==0||n==4)
		printf("Drying in day %d",n);
	return 0;
}
