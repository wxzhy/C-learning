#include<stdio.h>
int main() {
    char c=getchar();
    if(c>='a'&&c<='z')
    c+='A'-'a';
    else if(c>='A'&&c<'Z')
    c+='a'-'A';
    putchar(c);
	return 0;
}
