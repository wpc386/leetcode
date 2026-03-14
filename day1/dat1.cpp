#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *a,*b;
        int k=0;
        a=head;
        b=head;
        for(int i=0;i<n;i++){
            a=a->next;
        }
        while(a->next!=nullptr){
            a=a->next;
            b=b->next;
        }
        a=head;
        while(a->next!=nullptr){
            if(a->next==b){
                a->next=b->next;
                break;
            }
            a=a->next;
        }
        return head;
    }
};
ListNode* createNode(ListNode* head,vector<int>m){
    ListNode* a=head;
    a->next=new ListNode(m[1]);
    for(int i=0;i<m.size();i++){
        a->val=m[i];
        a->next=new ListNode(m[i]);
        a=a->next;
    }
    return head;
}
void print_Node(ListNode* head){
    while(head->next!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
}
int main(){
    Solution master;
    std::vector<int>m={1,2,3,4,5};
    ListNode* head=new ListNode(m[0]);
    head->val=m[0];
    head=createNode(head,m);
    int n=2;
    head=master.removeNthFromEnd(head,2);
    print_Node(head);
    return 0;
}