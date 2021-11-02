#include <iostream>
using namespace std;

int search(int arr[],int size, int element){
    int i;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        return i;
    }
    return -1;
}
int main(){
    int arr[] = {1,34,54,23,32,34};
    int element = 34;
    int size = sizeof(arr)/sizeof(int); //to find size of
    int result = search(arr,size,element);
    (result == -1)?cout<<"Element is not present"
    :cout<<"element is at index "<<result;
    return 0;
}