#include<stdio.h>
#include<sys/time.h>
void insertionsort(int arr[],int n)
{
   int i,j,ptr;
   for(i = 1 ; i < n ; i++)
   {
       j = i - 1;
       ptr = arr[i];
       while((j >= 0)&&(arr[j] >= ptr))
       {
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       arr[j + 1] = ptr;
   }
   for(i = 0 ; i < n ; i++)
        printf("%d ",arr[i]);
}


int main()
{
    int arr[] = {9,8,7,6,5,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    unsigned long long t1,t2,tdiff;
    struct timeval start,end;
    gettimeofday(&start,NULL);
    t1 = start.tv_sec * 1000000 + start.tv_usec;
    insertionsort(arr,n);
    gettimeofday(&end,NULL);
    t2 = end.tv_sec * 1000000 + end.tv_usec;
    tdiff = t2 - t1;
    printf("\nRunning Time %llu microseconds",tdiff);

    return 0;
}

