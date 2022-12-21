#include<stdio.h>
#include<string.h>
int main() {
	char a[5][100],b[5],m,max=0;
	for(int i=0; i<5; i++)
		scanf("%s",&a[i]);
	for(int i=0; i<5; i++)
		b[i]=strlen(a[i]);
	for(int i=0; i<5; i++)
		if(b[i]>max) {
			max=b[i];
			m=i;
		}
	puts(a[m]);
	return 0;
}