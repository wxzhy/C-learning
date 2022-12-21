#include<stdio.h>
#define PI 3.14
int main() {
	float r,h,C1,Sa,Sb,Va,Vb;
	scanf("%f %f",&r,&h);
	C1=2.0*PI*r;
	Sa=PI*r*r;
	Sb=4.0*PI*r*r;
	Va=(4.0/3.0)*PI*r*r*r;
	Vb=Sa*h;
	printf("C1=%.2f\n",C1);
	printf("Sa=%.2f\n",Sa);
	printf("Sb=%.2f\n",Sb);
	printf("Va=%.2f\n",Va);
	printf("Vb=%.2f\n",Vb);
	return 0;
}
