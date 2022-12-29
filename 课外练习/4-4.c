#include<stdio.h>
int main() {
	char i;
	i=getchar();
	if(i=='a'||i=='A')
		printf("90~100");
	else if(i=='b'||i=='B')
		printf("80~89");
	else if(i=='c'||i=='C')
		printf("70~79");
	else if(i=='d'||i=='D')
		printf("60~69");
	else if(i=='e'||i=='E')
		printf("50~59");
	else
		printf("error");
	return 0;
}