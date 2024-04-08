#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
    for(int i = 0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int binary_search(int arr[],int size,int element)
{
    int low, mid,high;
    low=0;
    high=size-1;
    //start searching
    while(low<=high)
    {

    
    mid=(low+high)/2;
    if(arr[mid]==element)
    {
        return mid;
    }
    if(arr[mid]<element)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
}
    //searching stop
    return -1;
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,12,34,78,900,9000};
    int size=sizeof(arr)/sizeof(int);
    int  element=78;
    int searchIndex = binary_search(arr,size,element);
    printf("The element %d was found at index %d\n",element,searchIndex);
    return 0;
}