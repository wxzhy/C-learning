#include<stdio.h>
struct date {
	int year;
	int month;
	int day;
};
int main() {
	struct date d;
	int count=0,days[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&d.year,&d.month,&d.day);
	for(int i=1; i<d.month; i++)
		count+=days[i-1];
	count+=d.day;
	if(((d.year%4==0&&d.year%100!=0)||d.year%400==0)&&d.month>2)
		count++;
	printf("%d",count);
	return 0;
}
