#include<stdio.h>
int count=0;
void hanoi(int x);
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int x=n/m;
	if(n%m==0)
		hanoi(x);
	else hanoi(x+1);
	printf("%d",count);
	return 0;
}
void hanoi(int x) {
	if(x==1)
		count++;
	else {
		hanoi(x-1);
		count++;
		hanoi(x-1);
	}
}