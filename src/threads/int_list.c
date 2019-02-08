#include "threads/int_list.h"

node createNode() {
	node tmp;
	tmp = (node)malloc(sizeof(struct Node));
	tmp->next = NULL;
	return tmp;
}

node
node_push_back (node head, struct thread *t, struct lock *lock) {
	node tmp, ptr;
	tmp = createNode();
	tmp->t = t;
	tmp->lock = lock;

	if(head == NULL)
		head = tmp;
	else {
		ptr = head;
		while(ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	return head;
}

void
node_remove(struct Node **head, struct Node *nod) {
	if(*head == nod) {
		*head = (*head)->next;
		free(nod);
		return;
	}
	struct Node *ptr = *head;
	while(ptr->next != nod) {
		ptr = ptr->next;
	}
	ptr->next = nod->next;
	free(nod);
}

// struct Node *
// node_pop_front(struct Node **head) {
// 	if(*head == NULL)
// 		return NULL;
// 	struct Node *ptr = *head;
// 	*head = (*head) -> next;
// 	return ptr;
// }