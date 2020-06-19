#include<stdio.h>
#include<stdlib.h>

void MergeSort(int* arr , int start , int end);
void Merging(int* arr,int start ,int mid,int end);
int arrx[100];

void MergeSort(int* arr , int start , int end)
{
    if(start<end)
    {
        int mid = (start + end)/2;
        MergeSort(arr ,start , mid);
        MergeSort(arr , mid+1 , end);
        Merging(arr,start,mid,end);
    }
}

void Merging(int* arr,int start ,int mid,int end)
{
    int i,j,temp;
    for( i = start,j = mid+1,temp = start ; i<=mid && j<=end ; temp++)
    {
        if(arr[i]>arr[j])
            arrx[temp] = arr[j++];
        else
            arrx[temp] = arr[i++];
    }
    while(i<=mid)
        arrx[temp++] = arr[i++];

    while(j<=end)
        arrx[temp++] = arr[j++];

    for(i = 0 ;i<=end ;i++)
    {
        arr[i] = arrx[i];
    }
}


int main()
{
    int num;
    printf("enter the number of input : ");
    scanf("%d",&num);

    int arr[num];
    printf("Enter Values into array : ");
    for(int i=0 ; i<num ; i++)
    {
        scanf("%d",&arr[i]);
    }

    MergeSort(arr,0,num-1);

    for(int i = 0 ;i<num ;i++)
        printf("%d\t",arr[i]);

    return 0;
}
