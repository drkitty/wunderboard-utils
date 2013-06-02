#ifndef FIFO_H
#define FIFO_H

#include <stdint.h>

struct fifoItem {
	uint8_t val;
	struct fifoItem* prev;
	struct fifoItem* next;
};

struct fifo {
	struct fifoItem* head;
	struct fifoItem* tail;
};

void initializeFifo(struct fifo* myFifo);

// Insert uint8_t before head
void queue(struct fifo* theFifo, uint8_t val);

// Insert string as chars before head
void queueStr(struct fifo* theFifo, char str[]);

// Remove tail
uint8_t dequeue(struct fifo* theFifo);

#endif // FIFO_H
