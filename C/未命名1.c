#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001>nul");
	int o,m,y,d,f;
	for(int o=1; o<=5; o++)
		for(int m=1; m<=5; m++)
			for(int y=1; y<=5; y++)
				for(int d=1; d<=5; d++)
					for(int f=1; f<=5; f++) {
						if(o+m+y+d+f==15
						        &&o*m*y*d*f==120
						        &&(o==3^m==2)
						        &&(y==4^d==2)
						        &&(y==1^f==5)
						        &&(f==4^d==3)
						        &&(o==2^m==5)) {
							printf("%d欧洲 %d美洲 %d亚洲 %d大洋洲 %d非洲",o,m,y,d,f);
							break;
						}
					}
	return 0;
}
