#include <stdio.h>
#include <string.h>
#include <malloc.h>
struct STUD {
	int num;
	char name[10];
	float score;
	struct STUD *next;
};
struct STUD *Head = NULL,*Last = NULL;
void AppendList(int a, char b[],float c);
void DelNode(int a);
void SearchNode(int a);
void PrintList();
void AppendList(int a, char b[],float c) {
	struct STUD *p;
	p = (struct STUD *)malloc(sizeof(struct STUD));
	p->num = a;
	strcpy(p->name, b);
	p->score = c;
	p->next = NULL;
	if(!Head) {
		Head = p;
		Last = p;
	} else {
		Last->next = p;
		Last = p;
	}
}
void PrintList() {
	struct STUD *p;
	for(p = Head; p!=NULL; p=p->next) {
		printf("学号%d,姓名;%s,成绩;%f\n",p->num,p->name,p->score);
	}
}
void DelNode(int a) {
	struct STUD *p,*prep;
	for(p = Head; p!=NULL; prep = p,p=p->next) {
		if(p->num == a) {
			if(p==Head)
				Head = p->next;
			else if(p == Last) {
				prep->next = NULL;
				Last = prep;
			} else
				prep->next = p->next;

		}
	}
	free(p);
}
void SearchList(int a) {
	struct STUD *p;
	int flag = 0;
	for(p = Head; p!=NULL; p=p->next) {
		if(p->num == a) {
			flag  = 1;
			printf("学号%d,姓名;%s,成绩;%f\n",p->num,p->name,p->score);
			break;
		}
	}
	if(flag == 0) printf("该同学不存在！\n");
}
int main() {
    system("chcp 65001>nul");
	AppendList(1,"张三",98);
	AppendList(2,"李四",88);
	AppendList(3,"王五",78);
	AppendList(4,"赵六",68);
	AppendList(5,"周期",58);
	PrintList();
	printf("测试查找\n");
	SearchList(5);
	printf("测试删除\n");
	DelNode(5);
	PrintList();
	getchar();
	getchar();
	return 0;
}
