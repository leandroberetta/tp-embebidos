/*
 * queue.h
 *
 *  Created on: Oct 26, 2023
 *      Author: lberetta
 */

#ifndef SRC_QUEUE_H_
#define SRC_QUEUE_H_
#include <stdint.h>
#include <stdbool.h>

#define QUEUE_SIZE 50

typedef struct {
    uint8_t data[QUEUE_SIZE];
    int front, rear, count;
} CircularQueue;

void QUEUE_init(CircularQueue* queue);
bool QUEUE_isFull(CircularQueue* queue);
bool QUEUE_isEmpty(CircularQueue* queue);
void QUEUE_enqueue(CircularQueue* queue, uint8_t item);
uint8_t QUEUE_dequeue(CircularQueue* queue);

#endif /* SRC_QUEUE_H_ */
