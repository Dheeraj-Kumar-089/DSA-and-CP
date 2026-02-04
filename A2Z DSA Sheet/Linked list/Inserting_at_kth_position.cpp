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

Node* insertkth(Node* head,int k,int val){
    if(head==NULL ) {
        if(k==1){
        return new Node(val);
        }
        else return head;
    }
    if(k==1){
        return new Node(val,head);
    }

    int cnt=0;
    Node* temp = head;
    while (temp!=NULL)
    {
        cnt++;
        if(cnt==k-1){
            Node* newNode = new Node(val, temp->next); // Create a new node with the given value and link it to the next node
            temp->next = newNode; // Link the current node to the new node
            break;

        }
        temp=temp->next;
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

    head = insertkth(head,2,10);
    print(head);
    
    return 0; 
}