#include <stdio.h>
#include <math.h>
int main() {
	FILE *fp;
	fp= fopen("table.txt","w");
	fprintf(fp,"Number  Square  Square root\n");
	printf("Number  Square  Square root\n");
	fprintf(fp,"---------------------------\n");
	printf("---------------------------\n");
	for(int i=1; i<=100; i++) {
		long double t,u;
		t=i*powl(i,2.0);
		u=sqrtl(i);
		printf("%6.0d%8.0Lf%9.3Lf\n",i,t,u);
		fprintf(fp,"%6.0d%8.0Lf%9.3Lf\n",i,t,u);
	}
	fclose(fp);
	return 0;
}