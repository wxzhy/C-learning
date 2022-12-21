#include<stdio.h>
char judge(int x);
int main() {
	int x;
	scanf("%d",&x);
	putchar(judge(x));
	return 0;
}
char judge(int x) {
	if(x>=90)
		return 'A';
	else if(x>=80)
		return 'B';
	else if(x>=70)
		return 'C';
	else if(x>=60)
		return 'D';
	else
		return 'E';
}