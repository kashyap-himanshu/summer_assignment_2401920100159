class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* temp1=head;
        ListNode* temp2=head;
        ListNode* temp3=head;
        int i=1,count=0;
        while(temp3!=NULL){
            temp3=temp3->next;
            count++;
        }
        while(i<=(count-n)){
            temp1=temp1->next;
        
            if(i<=count-(n+1)){
                temp2=temp2->next;

            }
            i++;
        }
        temp2->next=temp1->next;
        if(head==temp1){
            return head->next;
        }

        return head;
        
    }
};