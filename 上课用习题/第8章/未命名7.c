#include<stdio.h>
void sort(int c[]) {
	for(int i=0; i<19; i++)
		for(int j=0; j<19; j++)
			if(c[j]>c[j+1]) {
				int tmp;
				tmp=c[j];
				c[j]=c[j+1];
				c[j+1]=tmp;
			}
}
int main() {
	int a[10],b[10],c[20];
	for(int i=0; i<10; i++) {
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(int i=0; i<10; i++) {
		scanf("%d",&b[i]);
		c[i+10]=b[i];
	}
	sort(c);
	for(int i=0; i<20; i++)
		printf("%d ",c[i]);
	return 0;
}
