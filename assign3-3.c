#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    int a[n];
    a[0]=1;

    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(j%i==0)
            {
                a[j-1]=1;
            }
        }
    }

    printf("prime numbers <= %d are:\n",n);

    for(int i=0;i<n;i++)
    {
        if(a[i]!=1)
        {
            printf("%d ",i+1);
        }
    }
    return(0);
}