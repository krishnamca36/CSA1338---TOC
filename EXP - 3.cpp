#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int i,k,u=0;
	printf("Enter the string: ");
	scanf("%s",a);
	k=strlen(a);
	if((a[0]=='0') && (a[k-1]=='1'))
	{
		for(i=1;i<k-2;i++)
		{
			if((a[i]=='0')||(a[i]=='1'))
			{
				u++;
			}
			else {
				
				printf("Rejected");
				break;			
			}
		}
		if(k==2)
		{
			if(u==0)
			{
				printf("Accepted");
			}
		}
	
	else if(u==k-3)
		{
			printf("String accepted");
		}
	}
	else
	{
		printf("String rejected");
	}
	return 0;
}
