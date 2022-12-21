#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct student {
	int ID;
	char name[20];
	int score;
	struct student* pNext;
} STUDENT;
STUDENT *create() {
	STUDENT *head=(STUDENT *)malloc(sizeof(STUDENT)),*p=NULL;
	int a,c;
	char b[20];
	scanf("%d",&head->ID);
	scanf("%s",head->name);
	scanf("%d",&head->score);
	head->pNext=(STUDENT *)malloc(sizeof(STUDENT));
	p=head;
	while(1) {
		scanf("%d",&a);
		if(a==-1) {
			p->pNext=NULL;
			return head;
		}

		else {
			p->pNext=(STUDENT *)malloc(sizeof(STUDENT));
			p=p->pNext;
			scanf("%s",b);
			scanf("%d",&c);
			p->ID=a;
			strcpy(p->name,b);
			p->score=c;
		}
	}
}
void print(STUDENT *head) {
	while(head!=NULL) {
		printf("%d\n%s\n%d\n",head->ID,head->name,head->score);
		head=head->pNext;
	}
}
void freed(STUDENT *head) {
	STUDENT *p;
	while(head!=NULL) {
		p=head->pNext;
		free(head);
		head=p;
	}
}
int main() {
	STUDENT *head=create();
	print(head);
	free(head);
	return 0;
}
