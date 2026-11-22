#include<stdio.h>
int main(void)
{
	int n, i, k, x, max;
	int count[10]={0};
	
	printf("Enter n:");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &x);
		if(x==0){
			count[0]++;
		while(x!=0){
		    	k=x%10;
		    	count[k]++;
		    	x=x/10;
		    }
		}
	}
	max=count[0];
	for(i=0;i<10;i++){
		if(count[i]>max){
			max=count[i];
		}
	}
	printf("出现次数最多的数字：");
	for(i=0;i<10;i++){
		if(count[i]==max){
		    printf("%d ", i);
		}
	}
	printf("\n");
	
	return 0;

}
