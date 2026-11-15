#include<stdio.h> 
#define MAXN 10
int main(void)
{
	int i, index, j, n, x;
	int a[MAXN];
	
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter %d integers:", n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("Enter x:");
	scanf("%d", &x);
	for(i=0;i<n;i++){
		if(x<a[i]){
			break;
		}
	}
	index=i;
	for(j=n-1;j>=index;j--){
		a[j+1]=a[j];
	}
	a[index]=x;
	for(i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}
