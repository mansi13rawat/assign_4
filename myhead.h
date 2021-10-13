#include<stdio.h>
#include<stdlib.h>

void insertlast(int a[],int n, int key)
{
    a[n]=key;
}

void insertfirst(int a[],int n, int key)
{
   for(int i=n;i>0;i--)
   {
       a[i]=a[i-1];
   }
   a[0]=key;
}

void insertat(int a[], int n, int i, int key)
{
        for(int index=n;index>i;index--)
        {
            a[index]=a[index-1];
        }
        a[i]=key;
}

void dellast(int a[],int n, int key)
{
    a[n-1]=key;
}

void delfirst(int a[],int n,int key)
{
    a[0]=key;
}

void delat(int a[],int n,int key, int i)
{
    a[i]=key;
}

//--------------------------------------------------------------------------------------------------------------
int findunsorted(int a[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return(i);
        }
    }
}

int findsorted(int a[],int n, int key)
{
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<key)
        {
            t++;
        }
    }
    return(t);
}

void sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(a[j-1]>a[j] && j-1>=0)
        {
            int t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;

            j--;
        }
    }
}

int* getsubset(int a[],int n, int i, int j)
{
    static int final[50];
    for(int index=i;index<=j;index++)
    {
        final[index-i]=a[index];
    }

    return(final);
}

int* delsubset(int a[],int n, int i, int j)
{
    static int final[50];
    int t=0;
    for(int index=0;index<n;index++)
    {
        if(index<i || index>j)
        {
            final[t]=a[index];
            t++;
        }
    }

    return(final);
}

int* clone(int a[],int n,int b[])
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    return(b);
}

void rotanticlock(int a[],int n, int r)
{
    int b[r];

    for(int i=0;i<n;i++)
    {
        if(i<r)
        {
            b[i]=a[i];
        }
        else
        {
            a[i-r]=a[i];
        }
    }

    for(int i=n-r;i<n;i++)
    {
        a[i]=b[(i-(n-r))];
    }

}

void rotclock(int a[],int n, int r)
{
    int b[r];

    for(int i=0;i<r;i++)
    {
        b[i]=a[i];
    }

    for(int i=n-1;i>=r;i--)
    {
        a[(i+r)%n]=a[i];
    }

    for(int i=0;i<r;i++)
    {
        a[(i+r)]=b[i];
    }
}

void shiftright(int a[],int n)
{
    int b=a[n-1];

    for(int i=n-1;i>=0;i--)
    {
        if(i>0)
        {
            a[i]=a[i-1];
        }
        else
        {
            a[i]=b;
        }
    }
}
// 0 1 2 3 4 
// 4 0 1 2 3
void shiftleft(int a[], int n)
{
    int b=a[0];
    
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        {
            a[i]=a[i+1];
        }
        else
        {
            a[i]=b;
        }
    }
}

int max(int a[], int n)
{
    int max=0;
    int index=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    return(index);
}

int min(int a[],int n)
{
    int min=a[0];
    int index=0;

    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            index=i;
        }
    }

    return(index);
}

int* increasesize(int a[], int n, int m)
{
    int b[m];

    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    return(b);
}

void settozero(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
}
void delall(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        free(&a[i]);
    }
}
void delarray(int a[],int n)
{
    free(a);
}

int* allocate(int a[],int n)
{
    int* b=(int*)malloc(sizeof(1)*n);

    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    return(b);
}


