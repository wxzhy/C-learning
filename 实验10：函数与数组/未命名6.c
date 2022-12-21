#include<stdio.h>
void sort(int arr[],int len);
int main() {
	int n,a[1000];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	sort(a,n);
	for(int i=0; i<10; i++)
		printf("%d ",a[i]);

	return 0;
}
void sort(int arr[],int len) {
	for(int i=0; i<len-1; i++)
		for(int j=0; j<len-1; j++)
			if(arr[j]<arr[j+1]) {
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
}