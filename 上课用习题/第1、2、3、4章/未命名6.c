#include<stdio.h>
int main() {
	int a,b,c,d=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a%2)
		d++;
	if(b%2)
		d++;
	if(c%2)
		d++;
	if(d==2)
		puts("YES");
	else puts("NO");
	return 0;
}
