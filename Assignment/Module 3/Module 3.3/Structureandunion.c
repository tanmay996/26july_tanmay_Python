#include<stdio.h>
struct structure
{
    int a,b;
};
union union_example
{
    float a,b;
};
int main()
{
    struct structure obj;
    printf("Enter value for addition \n");
    printf("Enter first value:");
    scanf("%d",&obj.a);
    printf("Enter second value:");
    scanf("%d",&obj.b);
    obj.a+=obj.b;
    printf("\n Addition is %d",obj.a);
    
    union union_example u;
    printf("\nEnter value for division \n");
    printf("Enter first value:");
    scanf("%f",&u.a);
    printf("Enter second value:");
    scanf("%f",&u.b);
    u.a/=u.b;
    printf("\nDivision is %f",u.a);         //in "union" it takes last value
}

