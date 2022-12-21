#include<stdio.h>
#include<math.h>
int reverse_num(int* pNumber,int n);
int main() {
	int n,count=0,flag=0;
	scanf("%d",&n);
	int min=pow(10,n-1);
	int max=(pow(10,n)-1)/9;
	for(int j=min; j<=max; j++) {
		int k=j;
		int re=reverse_num(&k,n);
		if(re==j*9) {
			if(flag==0) {
				printf("The reverse number is:\n");
				flag=1;
			}
			printf("%d\n",j);
		}
	}
	if(flag==0)
		printf("There's no reverse number");
	return 0;
}
int reverse_num(int* pNumber,int n) {
	int l[10]= {0},rnum=0;
	for(int i=0; i<n; i++) {
		l[i]=*pNumber%10;
		*pNumber/=10;
	}
	for(int i=0; i<n; i++)
		rnum+=l[i]*pow(10,n-1-i);
	return rnum;
}