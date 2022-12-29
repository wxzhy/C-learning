#include<stdio.h>
#include<malloc.h>
struct STUD {
	int num;
	int score;
	struct STUD *next;
};
struct STUD *h1=NULL,*h2=NULL;
void AppendList(struct STUD **head, int num, int score) {
	struct STUD *p= malloc(sizeof(struct STUD));
	p->num=num;
	p->score=score;
	p->next=NULL;
	if(!*head)
		*head=p;
	else {
		struct STUD *q=*head;
		while (q->next!=NULL)
			q=q->next;
		q->next=p;
	}
}
void PrintList(struct STUD *head) {
	struct STUD *q=head;
	while (q->next!=NULL) {
		printf("%d %d\n",q->num,q->score);
		q = q->next;
	}
	printf("%d %d\n",q->num,q->score);
}
void merge(struct STUD *head1,struct STUD *head2) {
	while(head1->next!=NULL)
		head1=head1->next;
	head1->next=head2;
}
void sort(struct STUD *head) {
	struct STUD *p=head->next,*prep=head;
	while(p!=NULL) {
		if (prep->num > p->num) {
			int tmp;
			tmp = prep->num;
			prep->num = p->num;
			p->num = tmp;
			tmp = prep->score;
			prep->score = p->score;
			p->score = tmp;
		}
		prep=prep->next;
		p=p->next;
	}
}
int main() {
	int n,m,num,score;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++) {
		scanf("%d", &num);
		scanf("%d",&score);
		AppendList(&h1,num,score);
	}
	for(int i=0; i<m; i++) {
		scanf("%d", &num);
		scanf("%d",&score);
		AppendList(&h2,num,score);
	}
	merge(h1,h2);
	for(int i=0; i<n+m; i++)
		sort(h1);
	PrintList(h1);
	return 0;
}
