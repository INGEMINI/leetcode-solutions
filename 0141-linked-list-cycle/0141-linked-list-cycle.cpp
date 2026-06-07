/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //approach 1-- arr mai hr value daalte chalo agr value repeat ho gyi tbi end and ans is true ya agr head null tk aa gya to false
        //approach i am using here ..tortoise wali
        if((head==NULL)||(head->next==NULL)) return false;
        ListNode *slow = head , *fast= head;
        
        while((fast!=NULL)&&(fast->next!=NULL)){
                fast = fast->next->next;
                
                slow=slow->next;
                if (fast==slow) return true;
                
        }        
        
        return false;
       
    }
};