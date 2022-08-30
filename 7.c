// 7. Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
int main()
{
    int n,i,j,max;
    printf("Enter Value of N: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d Numbers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<=1;i++)
    {
       max=a[i];
       for(j=i;j<n;j++)
        {
          if(a[j]>max)
             {
               max=a[j];
               a[j]=a[i];
               a[i]=max;
             }
        }
    }
    printf("Second Largest Value is %d.",a[1]);

    return 0;
}