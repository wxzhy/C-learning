#include<stdio.h>
#include<malloc.h>
typedef struct LinkNode {
	int num;
	struct LinkNode* next;
} Node;
Node *create(int n) {
	Node *head=(Node *)malloc(sizeof(Node)),*p=NULL;
	p=head;
	for(int i=1; i<n; i++) {
		p->num=i;
		p->next=(Node *)malloc(sizeof(Node));
		p=p->next;
	}
	p->num=n;
	p->next=NULL;
	return head;
}
void next(Node *head,int a) {
	Node *p=head;
	int tmp;
	while(p!=NULL) {
		if(p->num==a) {
			if(p->next==NULL)
				return;
			int tmp;
			tmp=p->num;
			p->num=p->next->num;
			p->next->num=tmp;
			break;
		} else
			p=p->next;
	}
}
void prev(Node *head,int a) {
	Node *p=head;
	int tmp;
	if(p->num==a)
		return;
	while(p->next!=NULL) {
		if(p->next->num==a) {
			int tmp;
			tmp=p->num;
			p->num=p->next->num;
			p->next->num=tmp;
			break;
		} else
			p=p->next;
	}
}
void move(Node *head,int a,int b) {
	if(b==0)
		return;
	else if(b>0)
		for(int i=1; i<=b; i++)
			next(head,a);
	else if(b<0)
		for(int i=-1; i>=b; i--)
			prev(head,a);
}
void print(Node *head) {
	while(head!=NULL) {
		printf("%d ",head->num);
		head=head->next;
	}
}
int main() {
	int n,m,a,b;
	Node *head;
	scanf("%d",&n);
	scanf("%d",&m);
	head=create(n);
	for(int i=1; i<=m; i++) {
		scanf("%d %d",&a,&b);
		move(head,a,b);
	}
	print(head);
	return 0;
}
