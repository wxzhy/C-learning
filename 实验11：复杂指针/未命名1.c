#include<stdio.h>
int SubStr_Count(char *s1, char *s2);
int main() {
	char s1[10000],s2[10000];
	gets(s1);
	gets(s2);
	int a=SubStr_Count(s1, s2);
	printf("%d",a);
	return 0;
}
int SubStr_Count(char *s1, char *s2) {
	int count=0;
	while(*s1!='\0') {
		if(*s1==*s2) {
			char *t1=s1,*t2=s2;
			while(*t2++!='\0') {
				t1++;
				if(*t1!=*t2)
					break;
			}
			if(*t2=='\0') {
				s1=t1-1;
				count++;
			}
		}
		s1++;
	}
	return count;
}