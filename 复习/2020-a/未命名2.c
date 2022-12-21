#include<stdio.h>
int search(int (*a)[5],int m) {
	for(int i=0; i<m; i++)
		for(int j=0; j<5; j++) {
			for(int k=0; k<5; k++)
				if(a[i][j]<=a[i][k]&&k!=j)
					goto next;
			for(int k=0; k<m; k++)
				if(a[i][j]>=a[k][j]&&k!=i)
					goto next;
			return a[i][j];
		next:
			continue;
		}
	return -1;
}
int main() {
	int a[10][5],m;
	scanf("%d",&m);
	for(int i=0; i<m; i++)
		for(int j=0; j<5; j++)
			scanf("%d",&a[i][j]);
	printf("%d",search(a,m));
	return 0;
}
