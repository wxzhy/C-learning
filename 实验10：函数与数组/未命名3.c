#include<stdio.h>
int CompactIntegers(int a[],int n);
int main() {
	int n,a[10000];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	int len=CompactIntegers(a,n);
	for(int i=0; i<len-1; i++)
		printf("%d ",a[i]);
	printf("%d",a[len-1]);
	putchar('\n');
	printf("%d",len);
	return 0;
}
int CompactIntegers(int a[],int n) {

	for(int i=0; i<n; i++)
		if(a[i]==0) {
			for(int j=i; j<n-1; j++)
				a[j]=a[j+1];
			n--;
			i--;
		}
	return n;
}