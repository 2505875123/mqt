#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="3+4";
	int a=str[0]-'0';
	int b=str[2]-'0';
	int sum=a+b;
	printf("%d\n",sum);
	return 0;
}
