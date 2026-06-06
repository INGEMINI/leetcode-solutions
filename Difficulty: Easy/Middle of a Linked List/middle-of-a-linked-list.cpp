/*
class Node {
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
	
}; */

class Solution {
	public:
	int getMiddle(Node* head) {
		// code here
		int len = 0;
		Node* h1 = head;
		
		Node* h2 = head;
		while (h1 != NULL) {
			len++;
			h1 = h1->next;
			
		}
		
		int i, x;
		
		if ((len%2) != 0) {
			for (i = 0; i<len/2; i++) {
				
				h2 = h2->next;
				
			}
			x = h2->data;
		}
		
		else {
			for (i = 0; i<len/2; i++) {
				
				h2 = h2->next;
				
			}
			x = h2->data;
		}
		
		return x;
		
	}
};
