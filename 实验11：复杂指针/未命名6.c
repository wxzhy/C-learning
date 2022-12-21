#include<stdio.h>
int main() {
    char ch[7][100]={"一","二","三","四","五","六","日"};
    int n;
    scanf("%d",&n);
    printf("星期%s",*(ch+n-1));
    return 0;
}