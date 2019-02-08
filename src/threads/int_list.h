#ifndef THREADS_INT_LIST_H
#define THREADS_INT_LIST_H

#include "threads/thread.h"
#include "threads/synch.h"

struct Node {
	struct thread *t;
	struct Node *next;
	struct lock *lock;
};

void node_push_back (struct Node *, struct thread *, struct lock *);

struct Node * node_remove (struct Node *, struct Node *);

// struct Node * node_pop_front (struct Node **);

#endif