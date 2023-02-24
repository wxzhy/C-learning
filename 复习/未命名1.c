#include<stdio.h>
int main() {
	int i,s,k,count=0;
	for(i=100; i<=1000; i++) {
		s=0;
		k=i;
		while(k) {
			s=s+k%10;
			k=k/10;
		}
		if(s!=5)
			continue;
		count++;
	}
	printf("%d",count);
	return 0;
}
