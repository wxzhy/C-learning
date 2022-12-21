#include<stdio.h>
#include<malloc.h>
struct list {
	int data;
	struct list *next;
};
void print(struct list *head) {
	while(head!=NULL) {
		printf("%d ",head->data);
		head=head->next;
	}
}
int getmin(struct list *head) {
	int min=head->data;
	head=head->next;
	while(head!=NULL) {
		if(head->data<min)
			min=head->data;
		head=head->next;
	}
	return min;
}
void move(struct list *head,int num) {
	struct list *p=head;
	int tmp;
	if(p->data==num)
		return;
	while(p->next!=NULL) {
		if(p->next->data==num) {
			tmp=p->data;
			p->data=p->next->data;
			p->next->data=tmp;
		}
		p=p->next;
	}
}
int main() {
	int n,d,m;
	struct list *head=NULL;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&d);
		struct list *p=(struct list *)malloc(sizeof(struct list));
		p->data=d;
		p->next=head;
		head=p;
	}
	print(head);
	putchar('\n');
	m=getmin(head);
	for(int i=0; i<n; i++)
		move(head,m);
	print(head);
	return 0;
}
