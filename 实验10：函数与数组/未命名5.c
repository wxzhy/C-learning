#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	char h[8];
	double x=0;
	gets(h);
	int l=strlen(h);
	for(int i=1; i<=l; i++)
		switch(h[i-1]) {
			case 'F':
				x+=15*pow(16,l-i);
				break;
			case 'E':
				x+=14*pow(16,l-i);
				break;
			case 'D':
				x+=13*pow(16,l-i);
				break;
			case 'C':
				x+=12*pow(16,l-i);
				break;
			case 'B':
				x+=11*pow(16,l-i);
				break;
			case 'A':
				x+=10*pow(16,l-i);
				break;
			case '9':
				x+=9*pow(16,l-i);
				break;
			case '8':
				x+=8*pow(16,l-i);
				break;
			case '7':
				x+=7*pow(16,l-i);
				break;
			case '6':
				x+=6*pow(16,l-i);
				break;
			case '5':
				x+=5*pow(16,l-i);
				break;
			case '4':
				x+=4*pow(16,l-i);
				break;
			case '3':
				x+=3*pow(16,l-i);
				break;
			case '2':
				x+=2*pow(16,l-i);
				break;
			case '1':
				x+=1*pow(16,l-i);
				break;
			case '0':
				x+=0*pow(16,l-i);
				break;
		}
	printf("%.0lf",x);
	return 0;
}