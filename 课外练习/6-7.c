#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		int s=0;
		for(int j=1; j<i; j++)
			if(i%j==0)
				s+=j;
		if(i==s) {
			printf("%d its factors are ",i);
			for(int j=1; j<i; j++)
				if(i%j==0)
					printf("%d ",j);
			putchar('\n');
		}
	}
	return 0;
}
