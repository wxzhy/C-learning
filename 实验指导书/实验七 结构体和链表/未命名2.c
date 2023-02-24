#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct employee {
	long id; //工号
	char name[20]; //姓名
	float salary; //薪水
	struct employee *next ;
} EMP;
EMP *create() {
	EMP *head= malloc(sizeof(EMP)),*p=head;
	int a;
	char b[20];
	float c;
	scanf("%d %s %f",&head->id,head->name,&head->salary);
	scanf("%d %s %f",&a,b,&c);
	while(a) {
		p->next= malloc(sizeof(EMP));
		p=p->next;
		p->id=a;
		strcpy(p->name,b);
		p->salary=c;
		scanf("%d %s %f",&a,b,&c);
	}
	p->next=NULL;
	return head;
}
void print(EMP *head) {
	while(head!=NULL) {
		printf("%d %s %.2f\n", head->id, head->name, head->salary);
		head = head->next;
	}
}
EMP *combine(EMP *h1,EMP *h2) {
	EMP *head=h1;
	while(h1->next!=NULL)
		h1=h1->next;
	h1->next=h2;
	return head;
}
int main() {
	EMP *h1=create(),*h2=create();
	EMP *head=combine(h1,h2);
	print(head);

}