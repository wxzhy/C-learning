#include<stdio.h>
void fun(char c){
    if(c=='Z')
    puts("YZA");
    else if(c=='A')
    puts("ZAB");
    else{
        putchar(c-1);
        putchar(c);
        putchar(c+1);
    }
}
int main() {
    char c=getchar();
    fun(c);
	return 0;
}
