class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * temp;
        while(node->next != NULL) {
            node->val = node->next->val;
            temp = node;
            node = node->next;
        }
        temp->next = NULL;
        
    }
};