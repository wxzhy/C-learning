#include<stdio.h>
#include<math.h>
#define f1(a,b,c) S=(a+b+c)/2
#define f2(a,b,c,S) area=sqrt(S*(S-a)*(S-b)*(S-c))
int main() {
	int a,b,c;
	float S,area;
	scanf("%d %d %d",&a,&b,&c);
	f1(a,b,c);
	f2(a,b,c,S);
	printf("%.3f",area);
	return 0;
}
