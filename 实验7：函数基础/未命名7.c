#include <stdio.h>
#include <math.h>
int fzs(int x);
int main() {
	int a,b,sum;
	scanf("%d %d",&a,&b);
	sum=fzs(a)+ fzs(b);
	printf("%d", fzs(sum));
}
int fzs(int x) {
	int t[10],f=0,start,k[10],pos=0,sum=0;
	while (x>0) {
		t[f]=x%10;
		x/=10;
		f++;
	}
	for(int i=0; i<f; i++) {
		if(t[i]) {
			start = i;
			break;
		}

	}
	for(int i=start; i<f; i++) {
		k[pos]=t[i];
		pos++;
	}

	for(int i=0; i<pos; i++) {
		sum+=k[i]* pow(10,pos-1-i);
	}
	return sum;
}