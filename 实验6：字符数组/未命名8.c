#include<stdio.h>
int change(char str[], char x, int len) {
	int i, j, k, count = 0;
	for(i = 0; i < len/2 ; i++) {
		if(str[i] == x) {
			for(j = i; j < len-i-1; j++) {
				if(str[j] == str[len - i - 1])
					break;
			}
			count += j - i;
			for(k = j; k > i; k--)
				str[k] = str[k-1];
			str[i] = str[len - 1 - i];
		} else {
			for(j=len-1-i; j>=i; j--) {
				if(str[i] == str[j])
					break;
			}
			count += len - 1 - i - j;
			for(k = j; k < len - 1 - i; k++)
				str[k]=str[k+1];
			str[len - i - 1]=str[i];
		}
	}
	return count;
}
int main() {
	char str[8000]= {0}, x;
	int len, b[26]= {0}, i, j, k = 0;
	scanf("%d", &len);
	getchar();
	for(i = 0; i < len; i++) {
		scanf("%c", &str[i]);
	}
	for(i = 0; i < len; i++) {
		j = str[i]-'a';
		b[j]++;
	}
	for(j = 0; j < 26; j++) {
		if(b[j] % 2 != 0) {
			k++;
			x = j + 'a';
		}
	}
	if( k>=2 ) {
		printf("Impossible");
	} else
		printf("%d", change(str, x, len));
	return 0;
}