#include<stdio.h>
void ascend(int a[],int x);
void descend(int a[],int x);
int main() {
	int a[10],x;
	for(int i=0; i<9; i++)
		scanf("%d",&a[i]);
	scanf("%d",&x);
	if(a[8]>a[0])
		ascend(a,x);
	else if(a[8]<a[0])
		descend(a,x);
	for(int i=0; i<=9; i++)
		printf("%d\n",a[i]);
	return 0;
}
void ascend(int a[],int x) {
	int i;
	for(i=0; i<=8; i++)
		if(a[i+1]>x)
			break;
	for(int j=8; j>i; j--)
		a[j+1]=a[j];
	a[i+1]=x;
}
void descend(int a[],int x) {
	int i;
	for(i=0; i<=8; i++)
		if(a[i+1]<x)
			break;
	for(int j=8; j>i; j--)
		a[j+1]=a[j];
	a[i+1]=x;
}

