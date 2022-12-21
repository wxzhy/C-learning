#include<stdio.h>
void sort(int a[],int n);
int main() {
	int n;
	int a[1000]= {0},b[1000]= {0},c=-1;
	scanf("%d",&n);

	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	sort(a,n);
	for(int i=0; i<n; i++) {
		if((a[i]==a[i-1]&&i!=0)) {
			b[c]++;
		} else {
			if(i!=0)
				printf("%d\n",b[c]);
			printf("%d ",a[i]);
			c++;
			b[c]++;
		}
	}
	printf("%d\n",b[c]);
	return 0;
}
void sort(int a[],int n) {
	for(int j=0; j<n-1; j++)
		for(int i=0; i<n-1; i++)
			if(a[i]>a[i+1]) {
				int tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;
			}
}