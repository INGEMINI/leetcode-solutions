/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {

int len=0;
struct ListNode* h1=head;

struct ListNode* h2=head;
while(h1!=NULL){
    len++;
    h1=h1->next;

}

int i,x;

if ( (len%2) !=0 ){
for(i=0;i<len/2;i++){

    h2=h2->next;

}
x=h2->val;
}

else{
for(i=0;i<len/2;i++){

    h2=h2->next;

}
x=h2->val;
}




printf("value is %d",x);




return h2;

}