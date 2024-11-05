# 📋 (Make) Shared To-Do List 📋

## Objective
This activity demonstrates how to use `std::shared_ptr` to manage shared ownership of an object in C++. The goal is to help students understand reference counting, shared ownership, and dereferencing with `shared_ptr`.

## Instructions
1. Start by running the following command:
```bash
mkdir shared_pointers && cd shared_pointers && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/tree/main/cpsc121/shared_pointers/{main.cpp,run.sh,README.md}
```

2. Then, run `code .` to open VSCode.

3. Start Coding & Complete all the TODO's in `main.cpp`!

4. Run the testing suite script:

   > Note: You will only have to run `chmod +x run.sh` once!

   ```bash
   chmod +x run.sh
   ./run.sh
   ```

## Expected Output
```
Task created: Finish assignment
Reference count after creating p1: 1
Reference count after creating p2: 2
Reference count after creating p3: 3
Task: Finish assignment
Task destroyed: Finish assignment
```
