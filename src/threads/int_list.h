#ifndef THREADS_INT_LIST_H
#define THREADS_INT_LIST_H

#include "threads/thread.h"

struct Node {
	struct thread *t;
	struct Node *next;
};

void node_init (struct Node *, struct thread *);

struct Node * node_push_back (struct Node *, struct thread *);

struct Node * node_pop_front (struct Node **);

#endif