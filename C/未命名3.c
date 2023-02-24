#include <stdio.h>
#include <malloc.h>
#include <string.h>
typedef struct WORKER {
	long id;
	char name[10];
	float score;
	struct WORKER *next;
} WORKER;
WORKER *paixu(WORKER *head);
int main() {
	WORKER *work,*head,*cur;
	int i = 0;
	FILE *fp1;
	if((fp1 = fopen("workerlink.dat", "rb"))==NULL)
		exit(0);
	work = (WORKER *)malloc(sizeof(WORKER));
	head = work;
	cur = work;
	while(1) {
		fread(work,sizeof(WORKER),1,fp1) ;
		if (feof(fp1)) {
			cur->next = NULL;
			break;
		}
		cur = work;
		work = (WORKER *)malloc(sizeof(WORKER));
		cur->next = work;
	}
	fclose(fp1);
	work = paixu(head);
	for(; work!=NULL;) {
		if(work->score<=5000)
			printf("%ld , %s , %4.0f\n", work->id,work->name, work->score);
		work = work->next;
	}
	return 0;
}
WORKER *paixu(WORKER *head) {
	WORKER *q,*tail,*p=(WORKER*)malloc(sizeof(WORKER)),*temp;
	p->next=head;
	head=p;
	tail = NULL;

	while(tail!=head->next) {
		p=head;
		q=p->next;
		while(q->next!=tail) {
			if (p->next->score < q->next->score) {
				temp = q->next->next;
				p->next=q->next;
				p->next->next = q;
				q->next = temp;
			}
			p=p->next;
			q=p->next;

		}
		tail=q;
	}
	p=head->next;
	free(head);
	return p;
}
