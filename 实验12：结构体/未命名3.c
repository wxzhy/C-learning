#include<stdio.h>
struct student {
	char num[10];
	char name[20];
	int score[3];
};
int main() {
	struct student a[100];
	int n,ave[3]= {0},max=0,id;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%s %s %d %d %d",a[i].num,a[i].name,&a[i].score[0],&a[i].score[1],&a[i].score[2]);
	for(int i=0; i<n; i++) {
		ave[0]+=a[i].score[0];
		ave[1]+=a[i].score[1];
		ave[2]+=a[i].score[2];
		int sum=a[i].score[0]+a[i].score[1]+a[i].score[2];
		if(sum>max) {
			max=sum;
			id=i;
		}
	}
	ave[0]/=n;
	ave[1]/=n;
	ave[2]/=n;
	printf("%d %d %d\n",ave[0],ave[1],ave[2]);
	printf("%s %s %d %d %d",a[id].num,a[id].name,a[id].score[0],a[id].score[1],a[id].score[2]);
	return 0;
}
