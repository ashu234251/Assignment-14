// 6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10],i,j,min;

    printf("Enter 10 Numbers: \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

   

    for(j=0;j<=9;j++)
    {
        min=a[j];
       for(i=j;i<=9;i++)
        {
          if(a[i]<min)
          {
            min=a[i];
            a[i]=a[j];
            a[j]=min; 
          }
        }
         
    }

    printf("Sorted Values are: ");

    for(i=0;i<=9;i++)
      {
        printf("%d ",a[i]);
      }

    return 0;
}

