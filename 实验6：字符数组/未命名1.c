#include<stdio.h>
int main() {
	char s[1000];
	int i=0,a=0,b=0,c=0,d=0,e=0;
	gets(s);
	while(s[i]!='\0') {
		if(s[i]>='a'&&s[i]<='z')
			a++;
		else if(s[i]>='A'&&s[i]<='Z')
			b++;
		else if(s[i]>='0'&&s[i]<='9')
			c++;
		else if(s[i]==' ')
			d++;
		else e++;
		i++;
	}
	printf("小写字母:%d\n",a);
	printf("大写字母:%d\n",b);
	printf("数字:%d\n",c);
	printf("空格:%d\n",d);
	printf("其他字符:%d",e);
	return 0;

}
