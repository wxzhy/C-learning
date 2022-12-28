#include<stdio.h>
int main() {
	int a[10],min,c;
	for(int i=0; i<10; i++)
		scanf("%d",&a[i]);
	for(int i=0; i<10; i++) {
		min=a[i];
		c=i;
		for(int j=i+1; j<10; j++)
			if(a[j]<min) {
				min=a[j];
				c=j;
			}
		a[c]=a[i];
		a[i]=min;
	}
	for(int i=0; i<10; i++)
		printf("%d\n",a[i]);
	return 0;
}
