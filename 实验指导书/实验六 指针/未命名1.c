#include<stdio.h>
int search(int *list, int n, int x) {
	for(int i=0; i<n; i++)
		if(*(list+i)==x)
			return i;
	return -1;
}
int main() {
    int n,list[1000],x;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++)
    scanf("%d",&list[i]);
    printf("%d",search(list,n,x));
	return 0;
}
