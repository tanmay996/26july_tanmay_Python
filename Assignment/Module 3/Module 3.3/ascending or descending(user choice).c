#include<stdio.h>
    int temp;
int i,j,a[5];                           //global variable decleared
int ascending()                         //created function of ascending
{
    printf("Enter five value\n");
    for(i=0;i<5;i++)
    {
        printf("Enter value of %d :",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }


    printf("Ascending order is \n");
    for(i=0;i<5;i++)
    {
        printf(" %d \n",a[i]);
    }  
   
}
int descending()                    //created function of descending
{
    printf("Enter five value \n");
    for(i=0;i<5;i++)
    {
        printf("Enter value of %d :",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     printf("Descending order is : \n");
    for(i=0;i<5;i++)
    {
        printf("%d \n",a[i]);
    }  
   
}


int  main()                                         //main function 
{
    int no;
    printf("Enter 1 for Asscending 2 Descending : \n");
    scanf("%d",&no);
    switch(no)
    {
        case 1:
        {
           ascending();
           break;
        }

        case 2:
        {
            descending();
            break;
        }

        default:
         printf("Invalid choice");
    }
   
    

}