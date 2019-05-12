#include<stdio.h>
void main()
{
	int m[10],n,ch,i;
	printf("Enter the length of the string\n");
	scanf("%d",&n);
	printf("enter the input\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&m[i]);
	}
	ch=0;
	i=0;
	do
	{
		switch(ch)
		{
			case 0:if(m[i]==0)
				ch=0;
				else
					ch=1;
				break;
			case 1:if(m[i]==0)
				ch=0;
				else
					ch=1;
				break;
		}
		i++;
	}while(i<n);
	if (ch==0)
	{
		printf("the string is accepted");
	}else
	{
		printf("the string is rejected");
	}
}