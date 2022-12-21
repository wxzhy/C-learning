#include <stdio.h>
int main() {
	int a,b,c;
	float x,y,z;
	for(a=0; a<=33; a++) {
		x=(100.0-3.0*a)/2.0;
		for(b=0; b<=x; b++) {
			y=2.0*(x-b)*2.0;
			for(c=0; c<=y; c++) {
				if(3.0*a+2.0*b+0.5*c==100.0&&a+b+c==100) {
					printf("%d %d %d\n",a,b,c);
				}
			}
		}
	}
	return 0;
}