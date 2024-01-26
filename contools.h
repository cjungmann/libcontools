#ifndef CONS_H
#define CONS_H

#include <stdbool.h>

// from get_keystroke.c
const char* get_keystroke(char *buff, int bufflen);

// From terminal.c
bool get_termcap_by_code(const char **value, const char *capcode);
bool get_termcap_by_name(const char **value, const char *capname);
const char *capname_from_code(const char *capcode);

// contools.c
const char *transform_keystroke(char *buff,
                                int bufflen,
                                const char *keystroke,
                                const char *esc_str);

const char *transform_keystring(char *buff,
                                int bufflen,
                                const char *keystring,
                                const char *esc_str);

// from terminal.c
bool launch_terminal(void);
const char *capname_from_code(const char *capcode);
bool get_termcap_by_name(const char **value, const char *capname);
bool get_termcap_by_code(const char **value, const char *capcode);

// From screen.c
extern const char* tis_scroll_forward;
extern const char* tis_scroll_reverse;

bool tis_values_set(void);
void screen_write_str(const char *str, int file_handle);

void get_terminfo_values(void);
void reset_screen(void);
void start_ca_mode(void);
void stop_ca_mode(void);

void set_bold_mode(void);
void set_italic_mode(void);
void set_reverse_mode(void);
void set_normal_mode(void);

void start_standout_mode(void);
void stop_standout_mode(void);

void hide_cursor(void);
void show_cursor(void);
void normal_cursor(void);

void start_keyboard_transmit_mode(void);
void stop_keyboard_transmit_mode(void);

void set_scroll_limits(int top, int bottom);
void clear_scroll_limits(void);

void set_cursor_position(int row, int col);
void get_cursor_position(int *row, int *col);
void get_screen_size(int *row, int *col);




#endif

