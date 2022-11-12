temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    nodeToInsert->next = temp->next;
