#include<stdio.h>
void set(int n,int a[n]);
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
		a[i]=0;
	for(int i=2; i<n; i++)
		for(int j=2; j<=n/i; j++)
			a[i*j-1]=1;
	for(int i=1; i<n; i++)
		if(!a[i])
			printf("%d\n",i+1);
	return 0;
}
