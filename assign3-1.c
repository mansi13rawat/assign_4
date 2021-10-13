#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[50];
    printf("enter string: ");
    scanf("%s",&a);
    int x=0;

    for(int i=0;i<strlen(a);i++)
    {
        x=x+(a[i]*(pow(2,i)));
    }

    printf("hash value of the given string is: %d",x);
    return(0);
}