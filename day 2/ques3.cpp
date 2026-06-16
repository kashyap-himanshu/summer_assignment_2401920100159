class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int> hima;
        while(head!=NULL){
            hima.push_back(head->val);
            head=head->next;
        }
        reverse(hima.begin(),hima.end());
        int j=0;
        while(temp!=NULL){
            if(hima[j] != temp->val){
                return false;

            }
            j++;
            temp=temp->next;
        }
        return true;
        
    }
};