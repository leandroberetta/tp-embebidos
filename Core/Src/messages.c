/*
 * messages.c
 *
 *  Created on: Oct 31, 2023
 *      Author: lberetta
 */

#include "queue.h"
#include <string.h>

void sendMessage(uint8_t *message, CircularQueue *queue) {
	uint8_t l = strlen((char *) message);
	for (int i = 0; i < l; i++) {
		QUEUE_enqueue(queue, message[i]);
	}
}
