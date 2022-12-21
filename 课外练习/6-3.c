#include<stdio.h>
#include<math.h>
#define a 2
int main() {
	int n,Sn=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		Sn+=(n-i)*a*pow(10,i);
	printf("%d",Sn);
	return 0;
}
