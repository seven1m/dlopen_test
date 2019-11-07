This sample bit of code demonstrates how to use `dlopen`, `dlsym`, et al to dynamically load
a shared object file into a running process.

This works on Linux and macOS.

## Run

1. Compile the library:

   ```
   make lib
   ```

2. Compile the program:

   ```
   make main
   ```

3. Run the program, which will start a loop:

   ```
   ./main
   ```

4. Make a change to the library and recompile:

   ```
   make lib
   ```

5. Witness the output change in the main program.


## Output

```
hello from lib_loaded
Loaded lib successfully
hello from lib_func
```

_public domain_
