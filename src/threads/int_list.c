#include "threads/int_list.h"

void
node_push_back (struct Node *head, struct thread *t, struct lock *lock) {
	struct Node nptr = {t, NULL, lock};

	struct Node *ptr = head;
	while(ptr->next != NULL)
		ptr = ptr->next;
	ptr -> next = &nptr;
}

struct Node *
node_remove(struct Node *head, struct Node *node) {
	if(head == node)
		return head->next;
	struct Node *ptr = head;
	while(ptr->next != node) {
		ptr = ptr->next;
	}
	ptr->next = ptr->next->next;
	return head;
}

// struct Node *
// node_pop_front(struct Node **head) {
// 	if(*head == NULL)
// 		return NULL;
// 	struct Node *ptr = *head;
// 	*head = (*head) -> next;
// 	return ptr;
// }