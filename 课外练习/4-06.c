#include<stdio.h>
int main() {
	int sum=0;
	for(int i=1; i<=100; i++)
		if(i%2==1)
			sum+=i;
	printf("%d",sum);
	return 0;
}