#include<stdio.h>
struct student {
	char num[10];
	char name[20];
	int score[3];
};
void input(struct student *a);
void print(struct student b);
int main() {
	int n;
	struct student s[100];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		input(&s[i]);
	for(int i=0; i<n; i++)
		print(s[i]);
	return 0;
}
void input(struct student *a) {
	scanf("%s %s %d %d %d",a->num,a->name,&a->score[0],&a->score[1],&a->score[2]);

}
void print(struct student b) {
	printf("%s,%s,%d,%d,%d\n",b.num,b.name,b.score[0],b.score[1],b.score[2]);
}
