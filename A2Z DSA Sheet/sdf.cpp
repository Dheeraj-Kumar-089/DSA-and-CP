#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(NULL) {}
      ListNode(int x) : val(x), next(NULL) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* findMiddle(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* fast = head->next;
    ListNode* slow = head;

    while (fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void mergeSort(ListNode* low) {

    ListNode* middle = findMiddle(low);
    ListNode* middleNext = middle->next;
    middle->next=NULL;

    mergeSort(low);
    mergeSort(middleNext);
    merge(low, middleNext);
}

void merge(ListNode* low, ListNode* middle) {
    
    ListNode* left = low;
    ListNode* right = middle;
    ListNode* prev = NULL;

    while (left != NULL && right != NULL) {
        if (left->val <= right->val) {
            prev = left;
            left=left->next;
        } else {
            ListNode* next = right->next;
            right->next = left;
            prev->next=right;
            right = next;
            
        }
    }

    if(right != NULL) {
        
        prev->next=right;

    }
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        mergeSort(head);
        return head;
    }
};

int main(){
    


    return 0;
}