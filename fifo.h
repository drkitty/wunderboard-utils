#ifndef FIFO_H
#define FIFO_H

#include <stdint.h>

struct fifoItem {
	uint8_t val;
	struct fifoItem* next;
};

struct fifo {
	struct fifoItem* head;
};

void initializeFifo(struct fifo* myFifo);

// (insert before head)
void queue(struct fifo* theFifo, uint8_t val);


// (remove tail)
uint8_t dequeue(struct fifo* theFifo);

#endif // FIFO_H
