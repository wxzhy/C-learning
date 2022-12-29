#include<stdio.h>
int main() {
	float a[20],x=0,y=0,z=0,m=0,n=0;
	for(int i=0; i<20; i++)
		scanf("%f",&a[i]);
	for(int i=0; i<20; i++)
		if(a[i]>0) {
			x++;
			m+=a[i];
		} else if(a[i]<0) {
			y++;
			n+=a[i];
		} else if(a[i]==0)
			z++;
	printf("%.0f\n%.0f\n%.0f",x,y,z);
	if(x!=0) {
		float s=m/x;
		printf("\n%.1f",s);
	}
	if(y!=0) {
		float t=n/y;
		printf("\n%.1f",t);
	}
	return 0;
}