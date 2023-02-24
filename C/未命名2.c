#include<stdio.h>
void fun(char *s,char *t) {
	for(int i=0; s[i]!='\0';i++)
		if(i%2!=0&&s[i]%2==0)
			*t++=s[i];
}

int main() {
    char s[100],t[100];
    gets(s);
    fun(s,t);
    puts(t);
	return 0;
}
