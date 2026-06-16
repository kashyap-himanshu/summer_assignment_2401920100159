class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        while(curr!=NULL){
            ListNode* agla=curr->next;
            curr->next=prev;
            prev=curr;
            curr=agla;
           

        }
        return prev;
        
    }
};