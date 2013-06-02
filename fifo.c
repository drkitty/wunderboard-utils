#include "fifo.h"

#include <stdlib.h>
#include <stdint.h>

void initializeFifo(struct fifo* myFifo)
{
	myFifo->head = NULL;
	myFifo->tail = NULL;
}

void queue(struct fifo* theFifo, uint8_t val)
{
	struct fifoItem* oldHead;

	oldHead = theFifo->head;
	theFifo->head = (struct fifoItem*)malloc(sizeof(struct fifoItem));

	theFifo->head->val = val;
	theFifo->head->prev = NULL;
	theFifo->head->next = oldHead;


	if (theFifo->head->next == NULL) // only 1 element
		theFifo->tail = theFifo->head;
	else
		theFifo->head->next->prev = theFifo->head;
}

void queueStr(struct fifo* theFifo, char str[])
{
	uint8_t index = 0;

	do {
		queue(theFifo, str[index]);
	} while (str[++index] != '\0');
}

uint8_t dequeue(struct fifo* theFifo)
{
	uint8_t val;

	if (theFifo->tail->prev == NULL) { // only 1 element
		val = theFifo->tail->val;
		free (theFifo->tail);
		theFifo->head = NULL;
		theFifo->tail = NULL;
	} else { // at least 2 elements
		val = theFifo->tail->val;
		struct fifoItem* newTail = theFifo->tail->prev;
		free (theFifo->tail);
		theFifo->tail = newTail;
		newTail->next = NULL;
	};

	return val;
}
