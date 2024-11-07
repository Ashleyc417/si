# Iterators 
Iterators in C++ are objects that allow you to access each element of a container (e.g., std::vector, std::map). They are especially useful when iterating through data structures that aren't stored contiguously in memory, for example, Linked Lists (which you will see later in CPSC 131).


## Instructions
1. Download the project files:

   ```bash
   mkdir 2d && cd 2d && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/cpsc121/iterators/{main.cpp,run.sh,README.md} 
   ```
2. Complete the TODOs (implement the functions `printEverySecondWord` and `wordExists` in `main.cpp`).
3. Run the testing suite script:
   > Note: You will only have to run `chmod +x run.sh` once!
   ```bash
   chmod +x run.sh
   ./run.sh
   ```

This script will compile the `main.cpp` file using either `clang++` or `g++` (depending on availability). If compilation is successful, it will run the testing suite to verify the functionality.

4. Review the test results:

## Expected Output
```
Printing every second word:
Learning
to
use
iterators
in
C++
is
fun

Checking if certain words exist:
The word 'iterators' exists in the list.
The word 'hello' does not exist in the list.
```