int node_size(Node *head)
{
    int cnt = 0;
    Node * temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}