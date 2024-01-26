#ifndef TERMINAL_H
#define TERMINAL_H

#include <termios.h>
#include <unistd.h>
#include <stdbool.h>

bool launch_terminal(void);
bool get_termcap_string(const char **value, const char *capcode);
void set_rawread_mode(struct termios* tos);


#endif

