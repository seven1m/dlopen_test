#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  while(1) {
    void* lib_handle = dlopen("./lib.so", RTLD_NOW | RTLD_GLOBAL);

    if (lib_handle == NULL) {
      printf("Failed loading lib\n");
    } else {
      printf("Loaded lib successfully\n");

      void (*lib_func)() = dlsym(lib_handle, "lib_func");
      lib_func();

      dlclose(lib_handle);
    }

    sleep(5);
    printf("----------------------------\n");
  }

  return 0;
}
