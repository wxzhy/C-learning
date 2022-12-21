#include<stdio.h>
int main() {
	char c;
	c=getchar();
	if((c>='V'&&c<='Z')||(c>='v'&&c<='z'))
		c-=21;
	else
		c+=5;
	putchar(c);
	return 0;
}
