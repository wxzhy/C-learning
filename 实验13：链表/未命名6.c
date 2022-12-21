#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct stud_node {
	int num;      /*学号*/
	char name[20]; /*姓名*/
	int score;    /*成绩*/
	struct stud_node *next;    /*指向下个结点的指针*/
};
struct stud_node *createlist();
struct stud_node *deletelist(struct stud_node *head,int min_score);
int main() {
	struct stud_node *head,*p=NULL;
	int min_score;
	head=createlist();
	scanf("%d",&min_score);
	head=deletelist(head,min_score);
	p=head;
	while(p!=NULL) {
		printf("%d %s %d\n",p->num,p->name,p->score);
		p=p->next;
	}
	return 0;
}

struct stud_node *createlist() {
	struct stud_node *head=(struct stud_node *)malloc(sizeof(struct stud_node)),*p=NULL;
	int a,c;
	char b[10];
	scanf("%d %s %d",&head->num,head->name,&head->score);
	p=head;
	while(1) {
		scanf("%d",&a);
		if(a==0) {
			p->next=NULL;
			return head;
		} else {
			scanf("%s %d",b,&c);
			p->next=(struct stud_node *)malloc(sizeof(struct stud_node));
			p=p->next;
			p->num=a;
			strcpy(p->name,b);
			p->score=c;
		}
	}
}
struct stud_node *deletelist(struct stud_node *head,int min_score) {
	struct stud_node *p=head,*q=NULL,*t=head;
	while(p!=NULL) {
		if(p->score<min_score) {
			int sc=p->score;
			if(head->score==sc) {
				q=head;
				head=head->next;
				p=p->next;
				free(q);
			} else {
				while(t->next!=NULL) {
					if(t->next->score==sc) {
						q=t->next;
						t->next=q->next;
						p=p->next;
						free(q);
						break;
					}
					t=t->next;
				}
			}
		} else
			p=p->next;
	}
	return head;
}