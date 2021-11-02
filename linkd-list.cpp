#include <iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};
//traverese
void printList(Node * pointer){
    while (pointer != NULL)
    {
        cout<<pointer->data<<" ";
        pointer = pointer->next;
    }
    
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 7;
    head->next = second;
    
    second->data = 12;
    second->next = third;

    third->data = 72;
    third->next = NULL;

    printList(head);
    

    return 0;
}