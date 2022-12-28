#include<stdio.h>
void input();
void process();
void output();
int main() {
	int a[10];
	input(a);
	process(a);
	output(a);
	return 0;
}
void input(int a[]) {
	for(int i=0; i<10; i++)
		scanf("%d",&a[i]);
}
void process(int a[]) {
	int *min,*max,tmp;
	max=a;
	min=a;
	for(int i=1; i<10; i++)
		if(*min>a[i])
			min=a+i;
	tmp=*min;
	*min=*a;
	*a=tmp;
	for(int i=1; i<10; i++)
		if(*max<a[i])
			max=a+i;
	tmp=*max;
	*max=*(a+9);
	*(a+9)=tmp;
}
void output(int a[]) {
	for(int i=0; i<10; i++)
		printf("%d ",a[i]);
}