# Recursion
Let's practice recursion given a family line you have to print out!
<br/>

<div align="center">
   <div style="overflow: hidden;">
      <img src="https://media.tenor.com/CEy3N8CZMzIAAAAM/simpson-homer-simpson.gif" style="width: auto; height: 250px; margin-top: -15px; margin-bottom: -50px">
   </div>
</div>

<br/>

## Instructions
1. Download the project files:

   ```bash
   mkdir recursion_day1 && cd recursion_day1 && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/main/cpsc121/recursion_day1/{main.cpp,run.sh,README.md} 
   ```


2. Complete the TODOs in `main.cpp`


3. Run the testing suite script:
   > Note: You will only have to run `chmod +x run.sh` once!
   ```bash
   chmod +x run.sh
   ./run.sh
   ```
   > This script will compile the `main.cpp` file using either `clang++` or `g++` (depending on availability). If compilation is successful, it will run the testing suite to verify the functionality.


4. Review the test results:

<br/>

## Family Line
The youngest child is Mark and his father is Pillow. Pillow's father is Joel and his grandpa is Paul.
This can be represented as shown below:
```
           paul
             |
           joel
             |
          pillow
             |
            mark
```

## Expected Output
```
mark is the child of pillow
pillow is the child of joel
joel is the child of paul
paul is the Ancestor
```