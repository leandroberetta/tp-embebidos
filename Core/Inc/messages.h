/*
 * messages.h
 *
 *  Created on: Oct 31, 2023
 *      Author: lberetta
 */

#ifndef INC_MESSAGES_H_
#define INC_MESSAGES_H_

#include "queue.h"
#include <stdint.h>

void sendMessage(char *message, CircularQueue *queue);

#endif /* INC_MESSAGES_H_ */
