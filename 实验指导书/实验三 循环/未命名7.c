#include<stdio.h>
int main() {
    int n,a[10],b=0;
    scanf("%d",&n);
    while(n){
        a[b++]=n%10;
        n/=10;
    }
    for(int i=0;i<b;i++)
    printf("%d",a[b-1-i]);
	return 0;
}
