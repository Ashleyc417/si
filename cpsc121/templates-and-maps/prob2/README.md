# Problem 2: playerScores (Maps)

**Objective:** Use a map to track, modify, and manipulate the scores of 3 players in a game using `.size()`, `.empty()`, and `.clear()`.

**Time:** 10 minutes.

<br/>

**Problem:**
Write a program that uses a map to store player names (strings) as keys and their scores (integers) as values. After adding the initial scores, perform some modifications, and explore functions like `.size()`, `.empty()`, and `.clear()`.

<br/>

**Instructions:**
1. Create a `map<string, int>` to store player names and their scores.
2. Insert 3 players into the map with their starting scores:
   - "Alice" -> 50
   - "Bob" -> 75
   - "Charlie" -> 60
3. Increase Alice's score by 10 (she won a round).
4. Decrease Bob's score by 20 (he lost a round).
5. Increase Charlie's score by 15 (he completed a bonus level).
6. Display the number of players (use `.size()`).
7. Use `.empty()` to check if the map is empty (before clearing).
8. Use `.clear()` to remove all players and print a message that the game is over.
9. Use `.empty()` again to confirm the map is now empty after clearing.

<br/>

**Expected Output:**
```cpp
Alice: 60
Bob: 55
Charlie: 75
Number of players: 3
Is the map empty? No
The game is over.
Is the map empty now? Yes
```

