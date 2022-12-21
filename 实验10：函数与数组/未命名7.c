#include<stdio.h>
int c=0;
void f(int n);
int main() {
	int n;
	scanf("%d",&n);
	f(n);
	printf("%d",c);
	return 0;
}
void f(int n) {
	if(n==0||n==1)
		c++;
	else {
		for(int i=1; i<=2; i++)
			f(n-i);
	}

}