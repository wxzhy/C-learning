#include<stdio.h>
int main() {
	int a[5],min,max,s=0,t=0;
	for(int i=0; i<5; i++)
		scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(int i=1; i<5; i++) {
		if(a[i]>max) {
			max=a[i];
			s=i;
		} else if(a[i]<min) {
			min=a[i];
			t=i;
		}
	}
	int tmp=a[s];
	a[s]=a[t];
	a[t]=tmp;
	for(int i=0; i<5; i++)
		printf("%d ",a[i]);
	return 0;
}
