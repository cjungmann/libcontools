#include <stdio.h>
#include <string.h>

#include "contools.h"

int main(int argc, const char **argv)
{
   const char *keyp;
   char ksbuff[20];
   bool kmode = true;
   launch_terminal();
   get_terminfo_values();

   printf("Hit any key.  't' to toggle keyboard mode, 'q' to quit.\n");

   do
   {
      keyp = get_keystroke(NULL,0);
      printf("You pressed '%s'\n", transform_keystroke(ksbuff, sizeof(ksbuff), keyp, "\\E"));
      if (*keyp == 't')
      {
         kmode = !kmode;
         printf("Turning transmit mode to %s.\n", kmode?"on":"off");
         if (kmode)
            start_keyboard_transmit_mode();
         else
            stop_keyboard_transmit_mode();
      }

   } while (*keyp != 'q');

   return 0;
}
