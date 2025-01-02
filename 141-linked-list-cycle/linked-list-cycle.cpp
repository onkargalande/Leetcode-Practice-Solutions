/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, bool> visited;
        while (temp){
            if(visited[temp]){
                return true;
            }
            visited[temp] = true;
            temp = temp->next;            
        }

        return false;
        
    }
};