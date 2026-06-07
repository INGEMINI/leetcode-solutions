/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        if(head->next==NULL && n==1) return NULL;
        ListNode* temp1 = head , *temp2 = head;
        int s=0;
        while(temp1){
            s++;
            temp1 = temp1->next;

        }
        if(s==n){
            head=head->next;
            return head;
        }
        int reql = s-n,i=0;

        while(i<reql-1){
            temp2=temp2->next;
            i++;
            
        }
        temp2->next=temp2->next->next;
        return head;
    }
};