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

Node* removeval(Node* head,int val){
    if(head==NULL ) return head; //if linked list is empty then head == null;
    if(head->data == val) {
        Node* temp = head;
        head = head->next; // Move head to the next node
        free(temp); // Delete the old head
        return head; // Return the new head
    }
    
    Node* temp = head;
    Node* prev = NULL; // Initialize prev to NULL
    while (temp!=NULL)
    {
        
        if(temp->data == val){
            prev->next = prev->next->next; // Remove the kth node
            free(temp); // Free the memory of the removed node
            break; // Exit the loop after removing the node
        }
        prev = temp; // Store the k-1th node
        temp = temp->next; // Move to the next node
        
    }
    
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

    head = removeval(head,8);
    print(head);
    
    return 0; 
}