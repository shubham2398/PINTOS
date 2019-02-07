#include "threads/thread.h"

struct Node {
	int tid;
	struct thread *t;
	struct node next;
};

/* Initializes NODE as an empty list. */
void
node_init (struct Node *node, struct thread *t1)
{
  	node -> tid = t1 -> tid;
}

void insert(int thread_id, int ptr, struct thread t) {
	struct Node nptr (thread_id,)
}