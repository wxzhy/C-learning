#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct employee{
    long id; //工号
    char name[20]; //姓名
    float salary; //薪水
    struct employee *next ;
}EMP;
EMP *create(){
    EMP *head= malloc(sizeof(EMP)),*p=head;
    int a;
    char b[20];
    float c;
    scanf("%d %s %f",&head->id,head->name,&head->salary);
    scanf("%d %s %f",&a,b,&c);
    while(a){
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
EMP *InsertNode(EMP *head) {
    EMP *a=(EMP *) malloc(sizeof(EMP)),*p;
    scanf("%d %s %f",&a->id,a->name,&a->salary);
    if(a->salary<head->salary) {
        p = a;
        a->next=head;
        return p;
    }
    else{
        p=head;
        while(head->next!=NULL) {
            if (a->salary < head->next->salary) {
                a->next = head->next;
                head->next = a;
                return p;
            }
            head=head->next;
        }
            if(a->salary>head->salary){
                a->next = head->next;
                head->next = a;
            }

    }
    return p;
}
void print(EMP *head){
    while(head!=NULL) {
        printf("%d %s %.2f\n", head->id, head->name, head->salary);
        head = head->next;
    }
}
int main(){
    EMP *head=create();
    head= InsertNode(head);
    print(head);

}