class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* temp3=new ListNode();
        ListNode* t=temp3;
        t->val=100;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val == temp2->val){
                t->next=temp1;
                temp1=temp1->next;
                t=t->next;
                t->next=temp2;
                temp2=temp2->next;
                t=t->next;
            }else if(temp1->val < temp2->val){
                t->next=temp1;
                temp1=temp1->next;
                t=t->next;

            }else{
                t->next=temp2;
                temp2=temp2->next;
                t=t->next;
            }

            if(temp1==NULL && temp2!=NULL){
                while(temp2!=NULL){
                    t->next=temp2;
                    temp2=temp2->next;
                    t=t->next;
                }
            }else if(temp2==NULL && temp1!=NULL){
                while(temp1!=NULL){
                    t->next=temp1;
                    temp1=temp1->next;
                    t=t->next;
                }
            }
        }
        return temp3->next;
    }
};