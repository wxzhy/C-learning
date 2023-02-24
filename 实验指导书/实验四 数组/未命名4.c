#include<stdio.h>
#include<string.h>
int main() {
	char s[]="ajewifvamofwmzdfcivoaerepwq",ch=getchar();
	int flag=0;
	for(int i=0; i<strlen(s); i++)
		if(s[i]==ch) {
			printf("%d ",i);
			flag=1;
		}
	if(flag==0)
		puts("none");
	return 0;
}
