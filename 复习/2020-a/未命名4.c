#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct student {
	char name[10];
	int id;
	float score;
	struct student *next;
} student;
void delete(student *head) {
	student *p=head,*q=NULL;
	while(p->next!=NULL) {
		if(p->next->score==100) {
			q=p->next;
			p->next=q->next;
			free(q);
		} else
			p=p->next;
	}
}
int main() {
	char b[10];
	int a;
	float c;
	student *head,*p;
	head=(student *)malloc(sizeof(student));
	p=head;
	scanf("%d",&a);
	while(a!=0) {
		scanf("%s %f",b,&c);
		p->next=(student *)malloc(sizeof(student));
		p=p->next;
		p->id=a;
		strcpy(p->name,b);
		p->score=c;
		scanf("%d",&a);
	}
	p->next=NULL;
	delete(head);
	head=head->next;
	while(head!=NULL) {
		printf("\n%d %s %.1f",head->id,head->name,head->score);
		head=head->next;
	}
	return 0;
}
