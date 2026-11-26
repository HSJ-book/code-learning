#include<stdio.h>
int main(void)
{
	int n, i, k, max;
	char count[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter %d integers:\n", n);
	for(i=1;i<=n;i++){
		if(n==0){
			count[0]++;
		}else{
			k=n%10;
			count[k]++;
			k=k/10;
		}
	}
	printf("出现最多的次数是");
	max=0;
	for(i=0;i<=9;i++){
		if(count[i]>count[0]){
			max=i;
		}
	}
	printf("%d", i);
	
	return 0;
}
