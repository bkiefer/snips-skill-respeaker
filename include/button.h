#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "common.h"

#define LONG_PRESS_SEC 2000
#define DOUBLE_PRESS_TIMEOUT 300

/**
 * @brief: Create a button from GPIO port
 *
 * @param[in] pin: GPIO port number
 * @param[in] short_callback: callback function for a short press detection
 * @param[in] long_callback: callback function for a long press detection
 *
 * @returns: -1/ Error
 *            0/ Success
 */
int init_key(int pin,
             int lvl,
             void (*short_callback)(void),
             void (*double_callback)(void),
             void (*long_callback)(void));

/**
 * @brief: Release the GPIO port which is used for the button and kill the refreshing process
 *
 * @returns: -1/ Error
 *            0/ Success
 */
int destroy_key(void);

#endif