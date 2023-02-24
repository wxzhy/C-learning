#include<stdio.h>
int main() {
    char a[4];
    gets(a);
    printf("%c%c%c",a[2],a[1],a[0]);
	return 0;
}
