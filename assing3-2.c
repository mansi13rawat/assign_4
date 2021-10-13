#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void insertion()
{
    clock_t start, end;
    long int t;
    start = clock();

    int a[]={9,8,7,6,5,4,3,2,1};

    for(int i=1;i<sizeof(a)/sizeof(0);i++)
    {
        int j=i-1;

        while(a[j]>a[j+1] && j>=0)
        {
            int t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;

            j--;
        }
    }
    end = clock();
    t = end - start;
    printf("Total elapsed time for insertion sort worst case : %f\n", ((double)t / (double)CLOCKS_PER_SEC));
    

    start = clock();

    int b[]={1,2,3,4,5,6,7,8,9};

    for(int i=1;i<sizeof(b)/sizeof(0);i++)
    {
        int j=i-1;

        while(b[j]>b[j+1] && j>=0)
        {
            int t=b[j+1];
            b[j+1]=b[j];
            b[j]=t;

            j--;
        }
    }
    end = clock();
    t = end - start;
    printf("Total elapsed time for insertion sort best case : %f\n",((double)t / (double)CLOCKS_PER_SEC));
}

int main()
{
    //insertion sort

    insertion();
    return(0);
}