#include<stdio.h>
#define MAXLEN 80
int main(void)
{
	int i, j;
	char temp;
	char str[MAXLEN];
	
	printf("Enter a string:");
	i=0;
	while((str[i]=getchar())!='\n'){
		i++;
	}
	str[i]='\0';
	
	j=i-1;
	i=0;
	while(i<j){
		temp=str[i];
	    str[i]=str[j];
	    str[j]=temp;
	    i++;
	    j--;
	}
	for(i=0;str[i]!='\0';i++){
		putchar(str[i]);
	}
	printf("\n");
	
	return 0;
}
