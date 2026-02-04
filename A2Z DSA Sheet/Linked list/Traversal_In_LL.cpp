#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
  
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}


int main(){
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2LL(arr);
    Node* temp = head; // Initialize a temporary pointer to traverse the linked list
    // Traversing the linked list to print the data
    while(temp){
        cout<<temp->data<<" "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    }

    return 0;
}