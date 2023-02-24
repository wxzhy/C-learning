#include<stdio.h>
int a[10],b[10],n,m,c=0;
void reverse();
int main() {
	for(int i=0; i<10; i++)
		scanf("%d",&a[i]);
	scanf("%d %d",&m,&n);
	reverse();
	for(int i=0; i<c; i++)
		printf("%d ",b[i]);
	return 0;
}
void reverse() {
	for(int i=m+n-1; i>=m; i--)
		b[c++]=a[i];
}
