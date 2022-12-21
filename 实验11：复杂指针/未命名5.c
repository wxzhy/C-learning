#include <stdio.h>
#include <string.h>
int main() {
	char s[1000][200];
	int i = 0;
	do {
		scanf("%s", *(s + i));
		i++;
	} while (strchr(*(s + i - 1), '#') == NULL);
	*strchr(*(s + i - 1), '#') = '\0';
	for (int j = 0; j < i; j++) {
		if (strcmp(*(s + j), "the") == 0)
			**(s + j) = '\0';
		if (strcmp(*(s + j), "the.") == 0) {
			**(s + j) = '.';
			*(*(s + j)+1) = '\0';
		}
	}
	for (int j = 0; j < i-1; j++) {
		printf("%s",*(s + j));
		if(strchr(*(s+j),'.')==NULL)
			putchar(' ');
		else putchar('\n');
	}
	printf("%s",*(s+i-1));
	return 0;
}