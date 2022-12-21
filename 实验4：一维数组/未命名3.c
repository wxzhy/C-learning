#include<stdio.h>
int main() {
	int n,count=-1;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	int b;
	scanf("%d",&b);
	for(int i=0; i<n; i++)
		if(a[i]==b) {
			count=i;
			break;
		}
	if(count==-1)
		printf("Not Found");
	else printf("%d",count);

	return 0;
}
