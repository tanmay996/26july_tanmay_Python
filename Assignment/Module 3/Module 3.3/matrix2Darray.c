#include<stdio.h>
int main()
{
	float a[3][3],b[3][3];
	int i,j;
	for(i=0;i<3;i++)			//for matrix a
		{
			for(j=0;j<3;j++)
			{
				printf("Enter value :a[%d][%d]",i+1,j+1);
				scanf("%f",&a[i][j]);
			}
		}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%f ",a[i][j]);
			}
				printf("\n");
		}
		
	for(i=0;i<3;i++)			//for matrix b
		{
			for(j=0;j<3;j++)
			{
				printf("Enter value :b[%d][%d]",i+1,j+1);
				scanf("%f",&b[i][j]);
			}
		}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%f ",b[i][j]);
			}
				printf("\n");
		}
		
		printf("\n");
		printf("add of 2 matrix:\n");
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%f ",a[i][j]+b[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		printf("sub of 2 matrix:\n");
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%f ",a[i][j]-b[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
		printf("mul of 2 matrix:\n");
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%f ",a[i][j]*b[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
		printf("div of 2 matrix:\n");
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%f ",a[i][j]/b[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
//		printf("mod of 2 matrix:\n");
//				for(i=0;i<2;i++)
//			{
//				for(j=0;j<2;j++)
//				{
//					printf("%d ",a[i][j]%b[i][j]);
//				}
//				printf("\n");
//			}
		
}
