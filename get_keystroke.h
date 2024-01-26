#ifndef GET_KEYSTROKE_H
#define GET_KEYSTROKE_H

#include <stdbool.h>
#include <termios.h>

void set_rawread_mode(struct termios* tos);

const char *transform_keystroke(char *buff, int bufflen, const char *keystroke, const char *esc_str);
const char *transform_keystring(char *buff, int bufflen, const char *keystring, const char *esc_str);

const char* get_keystroke(char *buff, int bufflen);
const char* get_transformed_keystroke(char *buff, int bufflen, const char *esc_str);


#endif

