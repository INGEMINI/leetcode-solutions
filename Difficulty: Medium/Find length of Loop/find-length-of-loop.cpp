/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        map<Node*,int>mpp;
        Node* temp = head;
        int timer= 1;
        while(temp!=NULL){
            if(mpp.find(temp) != mpp.end()){
                int value = mpp[temp];
                return (timer - value);
                
            }
            mpp[temp]=timer;
            timer++;
            temp = temp->next;
        }
        return 0 ;
    }
};