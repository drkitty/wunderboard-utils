#include "fifo.h"

#include <stdlib.h>
#include <stdint.h>

void initializeFifo(struct fifo* myFifo)
{
	myFifo->head = NULL;
}

void queue(struct fifo* theFifo, uint8_t val)
{
	struct fifoItem* oldHead;

	oldHead = theFifo->head;
	theFifo->head = (struct fifoItem*)malloc(sizeof(struct fifoItem));
	theFifo->head->val = val;
	theFifo->head->next = oldHead;
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

	if (theFifo->head->next == NULL) { // only 1 element
		val = theFifo->head->val;
		free (theFifo->head);
		theFifo->head = NULL;
	} else { // at least 2 elements
		struct fifoItem* beforeTail = theFifo->head;
		while (beforeTail->next->next != NULL) {
			beforeTail = beforeTail->next;
		};
		val = beforeTail->next->val;
		free (beforeTail->next);
		beforeTail->next = NULL;
	};

	return val;
}
