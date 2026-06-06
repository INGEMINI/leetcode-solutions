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
    ListNode* reverseList(ListNode* head) {
        vector<int>arr;
        ListNode* temp = head, *tempagain = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;


        }
        int n = arr.size();
        int i = 0 ;
        while(tempagain){
            tempagain->val=arr[n-1-i];
            i++;
            tempagain=tempagain->next;
        }
        return head;

        
    }
};