#include<stdio.h>
#define MAXLINE 80
int main(void)
{
	int i;
	char str[MAXLINE];
	
	printf("Enter a string:");
	i=0;
	while((str[i]=getchar())!='\n'){
		i++;
	}
	str[i]='\0';
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]='A'+26-str[i];
		}
	}
	printf("After being encrypted:");
	for(i=0;str[i]!='\0';i++){
		putchar(str[i]);
	}
	printf("\n");
	
	return 0;
}
