/*WAP to take 10 no. Input from user and find out �
How many Even numbers are there
How many odd numbers are there
Sum of even numbers
Sum of odd numbers
*/ 
#include<stdio.h>
int main()
{
		int i,j;
		int a[10];
		int b[10];
	int no1=0;
	int no2=0;
	for(i=0;i<10;i++)
	{
		printf("Enter 10 value");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			no1+=a[i]; 
			printf("%d is Even number \n",a[i]);	
		}
		else
		{
			printf("%d is Odd number \n",a[i]);
			no2+=a[i];
		}
	}
	printf("Sum of even no:%d",no1);
	printf("\nSum of odd no:%d",no2);
}
