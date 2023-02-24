#include<stdio.h>
int fun() {
	int a,c=0;
	scanf("%d",&a);
	while(a!=-1) {
		scanf("%d",&a);
		c++;
	}
	return c;
}
int main() {
	printf("%d",fun());
	return 0;
}
