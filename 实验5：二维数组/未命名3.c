#include<stdio.h>
#include<math.h>
int main() {
	int a[3][4],max=0,sum,x,y;
	for(int i=0; i<3; i++)
		for(int j=0; j<4; j++)
			scanf("%d",&a[i][j]);
	for(int i=2; i>=0; i--)
		for(int j=3; j>=0; j--)
			if(max<=abs(a[i][j])) {
				x=i;
				y=j;
				max=abs(a[i][j]);
			}
	printf("%d %d %d",max,x+1,y+1);
	return 0;
}