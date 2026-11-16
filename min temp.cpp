#include<stdio.h>
#define MAXN 10
int main(void)
{
	int n, i, index;
	int a[MAXN];
	
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter %d integers", n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	index=0;
	for(i=1;i<n;i++){
		if(a[i]<a[index]){
		index=i;
		}
	}
	printf("min is %d\tsub is %d\n", a[index], index);

    {int temp;
    temp=a[index];
    a[index]=a[0];
    a[0]=temp;
	}
	for(i=0;i<n;i++){
    	printf("交换后的数组：%d", a[i]);
	}
	printf("\n");
	return 0; 
}
