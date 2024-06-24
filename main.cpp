// Code

// Definition for singly-linked list.
/*
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if (!head)
            return nullptr;
        if (!head->next)
        {
            delete head;
            return nullptr;
        }

        ListNode* temp = head;
        int count = 0;

        while (temp)
        {
            count++;
            temp = temp->next;
        }
        
        temp = head;
        ListNode* prev = nullptr;

        for (int index = 0; index < (count / 2); index++)
        {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;

        return head;
    }
};
