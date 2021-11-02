#include <iostream>
using namespace std;

int binarySearch(int arr[],int size, int element){
    int low,mid,high;
    low = 0;
    high =size-1;
    mid = (low+high)/2;
    //start search
    while(low<=high)
    if(arr[mid] == element){
        return mid;
    }
    if(arr[mid<element]){
        low = mid+1;
    }
    else{
        high = mid-1;
    }
    return -1;
}

int main(){
    int arr[] = {1,23,43,54,76};
    int size = sizeof(arr)/sizeof(int);
    int element = 43;
    int searchIndex = binarySearch(arr,size,element);
    cout<<"wanted output "<<searchIndex;
    return 0;
}