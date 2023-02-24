#include <stdio.h>
#include <stdlib.h>
struct list {
	int data;
	struct list *next;
};
struct list *creatlist() {
	struct list *p,*q,*ph;
	int a;
	ph=(struct list *)malloc(sizeof(struct list *));
	p=q=ph;
	printf("Input an integer number,enter -1 to the end:\n");
	scanf("%d",&a);
	while (a!=-1) {
		p=(struct list *)malloc(sizeof(struct list *));
		p->data=a;
		q->next=p;
		q=p;
		scanf("%d",&a);
	}
	p->next=NULL;
	return(ph);
}
void print(struct list *head) {
    head=head->next;
	while(head) {
		printf("%d ",head->data);
		head=head->next;
	}
}
int main() {
	struct list *head;
	head=creatlist();
	print(head);
	return 0;
}
