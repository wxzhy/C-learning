#include<stdio.h>
int a(int y);
int b(int y);
int main() {
	int y;
	scanf("%d",&y);
	if(a(y)==1||b(y)==1)
		printf("yes");
	else printf("no");
	return 0;
}
int a(int y) {
	if(y%4==0&&y%100!=0)
		return 1;
	else return 0;
}
int b(int y) {
	if(y%400==0)
		return 1;
	else return 0;
}