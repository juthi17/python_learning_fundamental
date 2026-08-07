#include<stdio.h>

int main()
{
    int n;
    float z,x,value;

    printf("   MENU-DRIVEN CAlCUlATOR   \n");
    printf("1. Addition(+)\n");
    printf("2. Subtraction(-)\n");
    printf("3. Multiplication(*)\n");
    printf("4. Division(/)\n");
    printf("5. Exit\n");
    printf(" Choose (1-5) : ");
    scanf("%d",&n);

    if(n>5)
    {
        printf("\nInvalid selection! Please select from 1 to 5\n");
        scanf("%d",&n);
    }

    printf("Enter first value: ");
    scanf("%f",&x);

    while(n<5)
    {
        printf("Enter another value : ");
        scanf("%f",&value);

        if(n==1)
        {
            z=x+value;
            printf("%.7f\n",z);
        }
        else if(n==2)
        {
            z=x-value;
            printf("%.7f\n",z);
        }
        else if(n==3)
        {
            z=x*value;
            printf("%.7f\n",z);
        }
        else if(n==4)
        {
            if(value!=0)
            {
                z=x/value;
                printf("%.7f\n",z);
            }
            else
            {
                
                printf("Error\n");
                break;
            }
        }
        x=z;
        printf(" Choose (1-5) : ");
        scanf("%d",&n);

        if(n>5)
        {
            printf("\nInvalid selection! Please select from 1 to 5\n");
            scanf("%d",&n);
        }
        if(n==5)
        {
            printf("\nExiting the calculation\n");
        }
    }
}
