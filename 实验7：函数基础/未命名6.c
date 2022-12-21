#include<stdio.h>
int main() {
	int a,b,suma=0,sumb=0;
	scanf("%d %d",&a,&b);
	for(int i=1; i<a; i++)
		if(a%i==0)
			suma+=i;
	for(int i=1; i<b; i++)
		if(b%i==0)
			sumb+=i;
	if(suma==b&&sumb==a)
		printf("yes");
	else printf("no");
	return 0;
}