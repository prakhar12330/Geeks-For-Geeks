bool isCircular(struct Node *head)
{
    //code here
    if(head==NULL || head->next==head) return true;
    struct Node*curr=head;
    while(curr)
    {
        if(curr->next==head)return true;
        curr=curr->next;
    }
    return false;
}
