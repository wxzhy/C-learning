#include<stdio.h>
int main() {
	int y;
	scanf("%d",&y);
	if(y%400==0||(y%4==0&&y%100!=0))
		printf("%d年的2月有29天",y);
	else
		printf("%d年的2月有28天",y);
	return 0;
}
