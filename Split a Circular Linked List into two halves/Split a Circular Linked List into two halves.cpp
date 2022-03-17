void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
     Node* slow=head;
   Node* fast=head;
   
   while(fast->next!=head && fast->next->next!=head)
   {
       slow=slow->next;
       fast=fast->next->next;
   }
  *head1_ref=head;
  *head2_ref=slow->next;
  slow->next=head;
  if(fast->next==head)
    fast->next=*head2_ref;
  else
    fast->next->next=*head2_ref;
}
