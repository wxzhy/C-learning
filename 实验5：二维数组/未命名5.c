#include <stdio.h>
void up();
void down();
void left();
void right();
int m,n,a[200][200],b[200][200]= {0},x=0,y=0,c[40000],cnt=0;
int main() {
	scanf("%d %d",&m,&n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	if(m>=2&&n>=2)
		down();
	else if(m==1)
		right();
	else if(n==1)
		down();
	else printf("%d",a[0][0]);
	for(int i=0; i<m*n-1; i++)
		printf("%d ",c[i]);
	printf("%d",c[m*n-1]);
	return 0;
}
void down() {
	c[cnt]=a[x][y];
	cnt++;
	b[x][y]=1;
	if(x<m-1&&!b[x+1][y]) {
		x++;
		down();
	} else {
		if(y<m-1&&!b[x][y+1]) {
			y++;
			right();
		} else return;
	}
}
void right() {
	c[cnt]=a[x][y];
	cnt++;
	b[x][y]=1;
	if(y<n-1&&!b[x][y+1]) {
		y++;
		right();
	} else {
		if(x>0&&!b[x-1][y]) {
			x--;
			up();
		} else return;
	}
}
void up() {
	c[cnt]=a[x][y];
	cnt++;
	b[x][y]=1;
	if(x>0&&!b[x-1][y]) {
		x--;
		up();
	} else {
		if(y>0&&!b[x][y-1]) {
			y--;
			left();
		} else return;
	}
}
void left() {
	c[cnt]=a[x][y];
	cnt++;
	b[x][y]=1;
	if(y>0&&!b[x][y-1]) {
		y--;
		left();
	} else {
		if(x<n-1&&!b[x+1][y]) {
			x++;
			down();
		} else return;
	}
}