#include<stdio.h>
void judge(int);
int main() {
	int n;
	scanf("%d",&n);
	judge(n);
	return 0;
}
void judge(int a) {
	for(int i=2; i<a; i++)
		if(a%i==0) {
			printf("not prime");
			return;
		}
	printf("prime");
}