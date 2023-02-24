#include<stdio.h>
#include<math.h>
void fun(int *n) {
	int a[10],l=0,b=0;
	while(*n>0) {
		a[l++]=*n%10;
		*n/=10;
	}
	for(int i=0; i<l; i++)
		if(a[i]%2)
			*n+=a[i]*powf(10,b++);
}
int main() {
	int n;
	scanf("%d",&n);
	fun(&n);
	printf("%d",n);
	return 0;
}
