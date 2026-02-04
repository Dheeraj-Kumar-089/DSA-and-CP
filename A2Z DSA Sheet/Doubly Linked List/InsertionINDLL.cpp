#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *InsertBeforeHead(Node *head, int data)
{
    Node *newHead = new Node(data, head, nullptr);
    head->back = newHead;
    return newHead;
}

Node *InsertBeforeTail(Node *head, int data)
{
    Node *temp = head;

    if (head->next == NULL)
    {
        return InsertBeforeHead(head, data);
    }

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(data, temp->next, temp);
    temp->next = newNode;
    temp->next->back = newNode;

    return head;
}

Node *InsertBeforeKthElement(Node *head, int k, int data)
{
    if (k == 1)
    {
        return InsertBeforeHead(head, data);
    }
    Node *KNode = head;

    int count = 0;

    while (KNode != NULL)
    {
        count++;
        if (count == k)
            break;
        KNode = KNode->next;
    }

    Node *prev = KNode->back;
    Node *front = KNode->next;

    if (front == NULL)
    {
        return InsertBeforeTail(head, data);
    }

    Node *newNode = new Node(data, KNode, prev);
    prev->next = newNode;
    KNode->back = newNode;
    return head;
}

void InsertBeforeNode(Node *temp, int data)
{
    Node *prev = temp->back;
    Node *front = temp->next;

    Node *newNode = new Node(data, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    
    return;
}

Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *KNode = new Node(arr[i], nullptr, prev);
        prev->next = KNode;
        prev = KNode;
    }
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node *mover = head;

    while (mover->next->next != NULL)
    {
        mover = mover->next;
    }

    Node *tail = mover->next;

    mover->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

void deleteNode(Node *temp)
{
    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == NULL)
    {
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = temp->next;
    front->back = temp->back;
    temp->next = temp->back = nullptr;
    free(temp);
    return;
}

Node *deleteKthElement(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *KNode = head;

    int count = 0;

    while (KNode != NULL)
    {
        count++;
        if (count == k)
            break;
        KNode = KNode->next;
    }

    Node *prev = KNode->back;
    Node *front = KNode->next;

    if (prev == NULL and front == NULL)
    {
        return NULL;
    }
    else if (prev == NULL)
    {
        return deleteHead(head);
    }
    else if (front == NULL)
    {
        return deleteTail(head);
    }
    prev->next = KNode->next;
    front->back = KNode->back;
    KNode->back = nullptr;
    KNode->next = nullptr;
    delete KNode;
    return head;
}

void display(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertArr2DLL(arr);

    // head = deleteKthElement(head,4);
    // deleteNode(head->next);
    // head = InsertBeforeHead(head,10);
    // head = InsertBeforeTail(head,10);
//    head = InsertBeforeKthElement(head, 1, 100);

    InsertBeforeNode(head->next,22);

    // head = deleteHead(head);
    // head = deleteTail(head);
    display(head);

    return 0;
}