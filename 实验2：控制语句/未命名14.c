#include<stdio.h>
int main() {
	int n,a=0,b=0,c=0,d=0,e=0;
	scanf("%d",&n);
	int t[n];
	for(int i=0; i<n; i++)
		scanf("%d",&t[i]);
	for(int i=0; i<n; i++) {
		if(t[i]>=90)
			a++;
		else if(t[i]>=80&&t[i]<90)
			b++;
		else if(t[i]>=70&&t[i]<80)
			c++;
		else if(t[i]>=60&&t[i]<70)
			d++;
		else if(t[i]<60)
			e++;
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}