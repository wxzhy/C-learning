#include<stdio.h>
#include<malloc.h>
typedef struct Node {
	int num;
	struct Node* next;
} Node;
Node *name(int n) {
	Node *head=(Node *)malloc(sizeof(Node)),*p;
	head->num=1;
	p=head;
	for(int i=2; i<=n; i++) {
		p->next=(Node *)malloc(sizeof(Node));
		p=p->next;
		p->num=i;
	}
	p->next=head;
	return head;
}
void pop(Node *head) {
	Node *p=head,*q;
	while(p->next!=p) {
		p=p->next;
		q=p->next;
		p->next=p->next->next;
		free(q);
		p=p->next;
	}
	printf("%d",p->num);
}
int main() {
	int n;
	Node *head=NULL;
	scanf("%d",&n);
	head=name(n);
	pop(head);
	return 0;
}
