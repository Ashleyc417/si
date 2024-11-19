# Problem 2: Recursive Friend Search

## Problem Statement
Design a `Friend` class that represents a binary tree node, where each node stores:
- A friend's name (`std::string`)
- A friend's age (`int`)
- Left and right child pointers (`std::shared_ptr<Friend>`)

Write a recursive function `int FindAge(const std::string& name)` to find the age of a friend by their name. If the friend is not found in the tree, return `-1`.

### Example
Input tree:
```
        Chelsy (23)
       /          \
Ashley (20)    Destiny (22)
```

## Expected Output
```
Age of Ashley: 20
Expected: 20
Age of Destiny: 22
Expected: 22
Age of David: -1
Expected: -1
```