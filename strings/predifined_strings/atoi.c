#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{

	char str[10];
	int number;
        printf("Enter the string\n");
	fgets(str,10,stdin);
	number=atoi(str);
	printf("The number is %d\n",number);
}
