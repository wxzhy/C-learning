#include<stdio.h>
void sort(int a[],int n);
int main() {
	int a[100],b[100]= {0},point=0;
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	sort(a,n);
	for(int i=0; i<n-1; i++) {
		if(a[i]+1==a[i+1])
			b[point]++;
		else point++;
	}
	int max=b[0];
	for(int i=0; i<point; i++) {
		if(b[i]>max)
			max=b[i];
	}
	printf("%d",max+1);
	return 0;
}
void sort(int a[],int n) {
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-1; j++)
			if(a[j]>a[j+1]) {
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
}