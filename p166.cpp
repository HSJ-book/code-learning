#include<stdio.h>
#define MAXN 10
#define MAXN 10
int main(void)
{
	int m, n, i, j, row, col;
	int a[MAXN][MAXN];
	
	printf("Enter m, n:");
	scanf("%d %d", &m, &n);
	printf("Enter %d integers\n", m*n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	row=col=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]>a[row][col]){
				row=i;
				col=j;
			}
		}
	}
	printf("max=a[%d][%d]=%d", row, col, a[row][col]);
	
	return 0;
}
