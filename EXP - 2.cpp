#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("enter the string:");
	scanf("%s",&a);
		if(a[0]=='0'&&a[strlen(a)-1]=='1')
		printf("String accepted");
		else
		printf("String not accepted");
	return 0;
}

