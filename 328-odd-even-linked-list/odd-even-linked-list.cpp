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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* hold = head->next;
        while(even!=NULL && even->next!=NULL){
            if(odd->next = even->next){
                odd = odd->next;
            }
            
            if(even->next = odd->next){
                even = even->next;
            }
            
        }
        odd->next = hold;
        return head;        
    
        
    }
};