#include<stdio.h>
int main() {
	int a[10],min,max;
	for(int i=0; i<10; i++)
		scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(int i=0; i<10; i++) {
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("%d %d",max,min);
	return 0;
}
