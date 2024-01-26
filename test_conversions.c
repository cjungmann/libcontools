#include <stdio.h>
#include <string.h>
#include <alloca.h>

#include "contools.h"

void to_raw(const char *str)
{
   // The string can only get shorter, so there's
   // no need to reserve extra space:
   int len = strlen(str) + 1;
   char *buff = alloca(len);
   const char *result = transform_keystring(buff, len, str, NULL);

   printf("Converted cooked '%s'\n", str);
   printf("          to raw '%s'\n", result);
}

void to_cooked(const char *str)
{
   // The worst case is if every character is a control
   // character, which would result in a string twice as long
   // as the original.
   int len = strlen(str) * 2 + 1;
   char *buff = alloca(len);
   const char *result = transform_keystroke(buff, len, str, NULL);

   printf("Converted raw '%s'\n", str);
   printf("    to cooked '%s'\n", result);
}

int main(int argc, const char **argv)
{
   to_raw("Hi Mom^H^H^HDad");
   to_raw("Two line^Lstring");
   to_raw("Escape a^ ^HLlinefeed");
}
