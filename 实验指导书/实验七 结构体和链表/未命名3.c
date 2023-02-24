#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define SIZE sizeof(struct stud)
struct stud {
	long id; //学号
	char name[20]; //姓名
	float score; //成绩
	struct stud *next ; //下一个结点的地址
};
struct stud *backlist(struct stud *head) {
	struct stud *p=head,*q=p->next,*r=q->next;
	while(r!=NULL) {
		q->next=p;
		p=q;
		q=r;
		r=r->next;
	}
	q->next=p;
	head->next=NULL;
	head=q;
	return head;
}
struct stud *create() {
	struct stud *head=(struct stud *) malloc(SIZE),*p=head;
	int a;
	char b[20];
	float c;
	scanf("%d %s %f",&head->id,head->name,&head->score);
	scanf("%d %s %f",&a,b,&c);
	while(a) {
		p->next=(struct stud *) malloc(SIZE);
		p=p->next;
		p->id=a;
		strcpy(p->name,b);
		p->score=c;
		scanf("%d %s %f",&a,b,&c);
	}
	p->next=NULL;
	return head;
}
void print(struct stud *head) {
	while(head!=NULL) {
		printf("%d %s %.2f\n", head->id, head->name, head->score);
		head = head->next;
	}
}
int main() {
	struct stud *head=create();
	head=backlist(head);
	print(head);
	return 0;
}
