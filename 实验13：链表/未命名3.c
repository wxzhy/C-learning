#include<stdio.h>
#include<malloc.h>
typedef struct LinkNode {
	int num;
	struct LinkNode* next;
} node;
int search(node *head,int n) {
	for(int i=1; i<n; i++)
		head=head->next;
	return head->num;
}
int main() {
	int n,count=1;
	node *head=(node *)malloc(sizeof(node)),*p=NULL;
	p=head;
	scanf("%d",&head->num);
	while(1) {
		scanf("%d",&n);
		if(n==-1) {
			p->next=NULL;
			break;
		} else {
			p->next=(node *)malloc(sizeof(node));
			p=p->next;
			p->num=n;
			count++;
		}
	}
	for(int i=count; i>=1; i--)
		printf("%d ",search(head,i));
	return 0;
}
