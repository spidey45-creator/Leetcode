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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next||!head->next->next){return{-1,-1};}
        ListNode*prev=head;
        ListNode*curr=head->next;

        int firstcrit=-1;
        int prevcrit=-1;
        int idx=1;
        int mini=INT_MAX;
            while(curr->next!=nullptr)
            {bool ismaxima(curr->val >prev->val && curr->val >curr->next->val);
            bool isminima(curr->val <prev->val&&curr->val <curr->next->val);
            if(ismaxima || isminima)
            {if(firstcrit==-1){firstcrit=idx;}
                else{
                    mini=min(mini,(idx-prevcrit));
                }
                 prevcrit=idx;
                }
               
                prev=curr;
                curr=curr->next;
                idx++;
              
               
               }
                 int maxi=prevcrit-firstcrit;
                  if(mini==INT_MAX){return {-1,-1};}
                   return{mini,maxi};
                
    
        
    }
};