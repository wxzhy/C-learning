#include<stdio.h>
int m1(int x,int y) {
	int min=x>y?y:x;
	for(int i=min; i>=1; i--)
		if(x%i==0&&y%i==0)
			return i;
}
int m2(int x,int y) {
	return x*y/m1(x,y);
}
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d %d",m1(x,y),m2(x,y));
	return 0;
}
