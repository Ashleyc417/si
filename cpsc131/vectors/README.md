# CPSC 131 SI – Fixed Vector Implementation

## 📖 Overview 📖
This repository was created to help develop a conceptual and practical understanding of **dynamic memory allocation, vectors, and fixed-size arrays**. 

In this repo, we will create a **FixedVector** class that:
- **Emulates a fixed-size array** but leverages `std::vector` for built-in functionality.
- Introduces **manual memory management concepts** without requiring direct raw pointer manipulation.
- Serves as a **stepping stone** for implementing vectors using raw pointers in **Professor Peralta’s project**.

<br>

## 🛠️ How This Activity Works 🛠️
The **FixedVector** class is a **wrapper around `std::vector<T>`** that **simulates a fixed-size array** by:
- Enforcing a **fixed capacity** that prevents exceeding its limit.
- Expanding **dynamically when needed** (doubling the capacity).
- Shrinking when too much space is unused (`shrink_to_fit()`).
- Providing **manual insertions, removals, and memory management**.

<br>

## 🚀 Features & Functions 🚀
Below are the key functions students will work with:

| **Function**   | **Description** | **Time Complexity** |
|---------------|--------------------------------------------------|----------------|
| `push_back(x)`  | Adds an element at the end, doubles capacity if full | **O(1) amortized**, **O(N) if resized** |
| `pop_back()`  | Removes last element, shrinks if necessary | **O(1)** |
| `insert(index, x)` | Inserts `x` at `index`, shifts elements if needed | **O(N)** |
| `erase(index)` | Removes element at `index`, shifts elements left | **O(N)** |
| `at(index)` | Returns element at `index`, with bounds checking | **O(1)** |
| `operator[](index)` | Accesses element at `index` without bounds checking | **O(1)** |
| `clear()` | Removes all elements, resets size | **O(N)** |
| `get_size()` | Returns current size of the vector | **O(1)** |
| `get_capacity()` | Returns vector’s capacity | **O(1)** |

<br>

## 📂 Project Files 📂
- **`FixedVector.hpp`** – Header file containing the `FixedVector<T>` class.
- **`main.cpp`** – A sample **driver program** that demonstrates functionality.

<br>

## 📌 Instructions 📌
1. **Clone the repository:**
   ```bash
   git clone <https link>
   cd <repo>
2. **Run the Code**
    > run `make` \
    > then `./main`
