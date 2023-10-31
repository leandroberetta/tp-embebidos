/*
 * queue
 *
 *  Created on: Oct 26, 2023
 *      Author: lberetta
 */

#include "queue.h"

void QUEUE_init(CircularQueue* queue) {
    queue->front = 0;
    queue->rear = -1;
    queue->count = 0;
}

bool QUEUE_isFull(CircularQueue* queue) {
    return (queue->count == QUEUE_SIZE);
}

bool QUEUE_isEmpty(CircularQueue* queue) {
    return (queue->count == 0);
}

void QUEUE_enqueue(CircularQueue* queue, uint8_t item) {
    if (!QUEUE_isFull(queue)) {
        queue->rear = (queue->rear + 1) % QUEUE_SIZE;
        queue->data[queue->rear] = item;
        queue->count++;
    }
}

uint8_t QUEUE_dequeue(CircularQueue* queue) {
    uint8_t item = 0;
    if (!QUEUE_isEmpty(queue)) {
        item = queue->data[queue->front];
        queue->front = (queue->front + 1) % QUEUE_SIZE;
        queue->count--;
    }
    return item;
}
