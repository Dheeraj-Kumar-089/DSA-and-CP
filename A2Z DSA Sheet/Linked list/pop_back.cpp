#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

public:
    Node(int data1,Node* next1){ // Constructor to initialize data and next pointer
        // Initialize data with the given value and next with the given pointer
        data = data1;
        next = next1; // Initialize next pointer to the given node
    }

public:
    Node(int data1){
        data = data1; // Initialize data with the given value
        next = nullptr; // Initialize next to nullptr
    }
  
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]); // Create the head node with the first element of the array
    Node* mover = head; // Initialize the head of the linked list
    // Loop through the array and create nodes for each element

    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);// Create a new node for each element
        // Link the current node to the next node
        mover->next=temp; // Link the current node to the new node
        // Move the mover pointer to the new node
        mover = temp; // Move the mover pointer to the new node
    }
    return head;
    
}

Node* pop_back(Node* head){
    if(head==NULL || head->next==NULL) return NULL;

    Node* temp = head;
   
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    return head;
}

void print(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
    cout<<endl;
}

int main(){
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2LL(arr); // Convert array to linked list
    // Traversing the linked list to print the data

    print(head);
    head = pop_back(head);
    
    return 0; 
}