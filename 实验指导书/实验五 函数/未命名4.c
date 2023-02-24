#include<stdio.h>
int f(int x) {
	static int s=1;
	s*=x;
	return s;
}
int main() {
	for(int i=1; i<=5; i++)
		printf("%d\n",f(i));
	return 0;
}
