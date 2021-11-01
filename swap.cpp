#include <iostream>
using namespace std;

int main(){
    int a=1,b=2;
    cout<<"Before : "<<endl;
    cout<<a<<" "<<b<<endl;;
    int temp;
    //swap logic
    temp = a;
    a = b;
    b = temp;

    cout<<"Before : "<<endl;
    cout<<a<<" "<<b;
    return 0;
}