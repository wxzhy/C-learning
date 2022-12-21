#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct stud {
	long id;
	char name[20];
	float score;
	struct stud *next;
};
struct stud *insert(struct stud *head,struct stud *stu) {
	struct stud *p=head;
	if(stu->id>=head->id) {
		stu->next=head;
		return stu;
	} else {
		while(p->next!=NULL)
			if(stu->id>=p->next->id) {
				stu->next=p->next;
				p->next=stu;
				return head;
			} else
				p=p->next;
	}
	p->next=stu;
	return head;
}
int main() {
	struct stud *head=(struct stud *)malloc(sizeof(struct stud)),*stu=(struct stud *)malloc(sizeof(struct stud)),*p;
	int a;
	char b[20];
	float c;
	scanf("%d %s %f",&head->id,head->name,&head->score);
	p=head;
	scanf("%d",&a);
	while(a!=0) {
		scanf("%s %f",b,&c);
		p->next=(struct stud *)malloc(sizeof(struct stud));
		p=p->next;
		p->id=a;
		strcpy(p->name,b);
		p->score=c;
		scanf("%d",&a);
	}
	p->next=NULL;
	scanf("%d %s %f",&stu->id,stu->name,&stu->score);
	stu->next=NULL;
	head=insert(head,stu);
	while(head!=NULL) {
		printf("\n%d %s %.1f",head->id,head->name,head->score);
		head=head->next;
	}
	return 0;
}
