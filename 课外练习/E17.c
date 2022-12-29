#include<stdio.h>
int n,a[100],b[100]= {0},l=0;
void sort();
void count();
int main() {
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	sort();
	count();
	int max=0;
	for(int i=0; i<=l; i++)
		max=max>b[i]?max:b[i];
	printf("%d",max);
	return 0;
}
void count() {
	b[l]=1;
	for(int i=0; i<n-1; i++)
		if(a[i]+1==a[i+1])
			b[l]++;
		else {
			l++;
			b[l]=1;
		}
}
void sort() {
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-1; j++)
			if(a[j]>a[j+1]) {
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
}