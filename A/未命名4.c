#include<stdio.h>
#include<stdlib.h>
struct  stud {
	long  id; //学号
	char  name[20]; //姓名
	float  score; //成绩
	struct  stud   *next ; //下一个结点的地址
};
struct stud *create() {
	int a;
	struct stud *head=(struct stud*)malloc(sizeof(struct stud)),*p=head;
	scanf("%d %s %f",&head->id,head->name,&head->score);
	scanf("%d",&a);
	while(a) {
		p->next=(struct stud*)malloc(sizeof(struct stud));
		p=p->next;
		p->id=a;
		scanf("%s %f",p->name,&p->score);
		scanf("%d",&a);
	}
	p->next=NULL;
	return head;
}
struct stud *insert(struct stud * head, struct stud * stu)  {
	struct stud *p,*p1,*p2;
	p1=head;
	p=stu;
	if(head==NULL) {
		head=p;
		p->next=NULL;
		return(head);
	}
	while((p->score<p1->score)&&(p1->next!=NULL)) {
		p2=p1;
		p1=p1->next;
	}
	if(p->score>=p1->score)	{
		if(head==p1)	{
			p->next=head;
			head=p;
		} else	{
			p2->next=p;
			p->next=p1;
		}
	} else {
		p1->next=p;
		p->next=NULL;
	}
	return(head);
}
void print(struct stud *head) {
	while(head) {
		printf("%d %s %.2f\n",head->id,head->name,head->score);
		head=head->next;
	}
}
int main() {
	struct stud *head=create(),*stu=(struct stud*)malloc(sizeof(struct stud));
	scanf("%d %s %f",&stu->id,stu->name,&stu->score);
	head=insert(head,stu);
	print(stu);
}
