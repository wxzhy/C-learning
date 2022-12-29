#include<stdio.h>
int main() {
	int count=0;
	for(int n=1000; n<10000; n++) {
		int a,b,c,d;
		a=n/1000;
		b=(n%1000)/100;
		c=(n%100)/10;
		d=(n%10);
		if(a==d&&b==c) {
			count++;
			printf("%d%d%d%d",a,b,c,d);
			if(count%6==0)
				printf("    \n");
			else printf("    ");
		}
	}
	printf("%d",count);
}