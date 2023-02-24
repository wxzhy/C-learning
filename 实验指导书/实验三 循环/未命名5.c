#include<stdio.h>
int main() {
	int m,n,s=0,t=0,flag,count=0,sum=0;
	scanf("%d %d",&m,&n);
	for(int i=m; i<=n; i++) {
		flag=0;
		for(int j=2; j<i; j++)
			if(i%j==0)
				flag=1;
		if(!flag) {
			count++;
			sum+=i;
		}
	}
	printf("%d %d",count,sum);
	return 0;
}
