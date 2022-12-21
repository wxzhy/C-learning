#include<stdio.h>
int main() {
	int a,b,c,d;
	int hour,min,total;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	total=(c-a)*60+d-b;
	hour=total/60;
	min=total%60;
	printf("%d %d",hour,min);
	return 0;
}