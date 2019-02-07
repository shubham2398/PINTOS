#include "threads/int_list.h"

/* Initializes NODE as an empty list. */
void
node_init (struct Node *node, struct thread *t1) {
  	node -> t = t1;
  	node -> next = NULL;
}

struct Node *
node_push_back (struct Node *head, struct thread *t) {
	struct Node *nptr;
	node_init(nptr, t);
	
	if(head == NULL) {
		return nptr;
	}
	
	struct Node *ptr = head;
	while(ptr->next != NULL)
		ptr = ptr->next;
	ptr -> next = nptr;

	return head;
}

struct Node *
node_pop_front(struct Node **head) {
	if(*head == NULL)
		return NULL;
	struct Node *ptr = *head;
	*head = (*head) -> next;
	return ptr;
}