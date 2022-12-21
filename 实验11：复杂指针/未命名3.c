#include <stdio.h>
#include <string.h>
void sort(char (*ch)[100]);
int main() {
	char p[10][100];
	for (int i = 0; i < 10; i++)
		scanf("%s", *(p + i));
	sort(p);
	for (int i = 0; i < 10; i++)
		printf("%s ", *(p + i));
}
void sort(char (*ch)[100]) {
	for(int i=0; i<9; i++)
		for(int j=0; j<9; j++)
			if(strcmp(*(ch+j),*(ch+j+1))>0) {
				char tmp[100];
				strcpy(tmp,*(ch+j));
				strcpy(*(ch+j),*(ch+j+1));
				strcpy(*(ch+j+1),tmp);
			}

}