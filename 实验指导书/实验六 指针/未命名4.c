#include<stdio.h>
#include<string.h>
void insert(char *s1, char *s2,int f){
    char t[1000];
    for(int i=0;i<f;i++)
    t[i]=s1[i];
    strcpy(t+f,s2);
    strcpy(t+f+strlen(s2),s1+f);
    strcpy(s1,t);
 }
int main() {
    char s1[1000],s2[100];
    int f;
    gets(s1);
    gets(s2);
    scanf("%d",&f);
    insert(s1,s2,f);
    puts(s1);
	return 0;
}
