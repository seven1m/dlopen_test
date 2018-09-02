#include "stdio.h"

// https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html
// gcc only? what happens with clang?
void __attribute__ ((constructor)) lib_loaded(void);

void lib_loaded(void) {
  printf("hello from lib_loaded\n");
}

void lib_func(void) {
  printf("hello from lib_func\n");
}
