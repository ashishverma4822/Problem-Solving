// Ashish Kumar Verma
// @ashishverma4822 @vashishk0602 @vashishk2003

// Recursive Approach 1
class Solution
{
    private:
    Node* reverse(Node *head){
        if(head == NULL or head->next == NULL) return head;
        Node * curr = reverse(head->next);
        head->next->next = head;
        head->next = NULL ;
        return curr;
    }
    Node* helpme(Node* head,int carry){
        if(head==NULL){
            if(carry!=0){
                return new Node(carry);
            }
            else return head;
        }
        int val=head->data+carry;
        head->data= val%10;
        head->next = helpme(head->next,val/10);
        return head;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head = reverse(head);
        head = helpme(head,1);
        head = reverse(head);
        return head;
    }
};


// Recursive Approach 2

class Solution
{
    private:
    pair<Node*,int> helpme(Node* head){
        if(head==NULL){
            return {head,1};
        }
        pair<Node*,int> p = helpme(head->next);
        int val=head->data+p.second;
        head->data=val%10;
        return {head,val/10};
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        pair<Node*,int> p = helpme(head);
        if(p.second==1){
            Node* newNode = new Node(1);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
};

//Thank You
