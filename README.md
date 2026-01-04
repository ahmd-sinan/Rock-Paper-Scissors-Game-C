# Rock-Paper-Scissors Game (Console-Based in C)

A classic interactive Rock-Paper-Scissors game built in C. This project demonstrates the use of random number generation and conditional logic to create a "Man vs. Computer" experience.

## 🎮 Features
* **Man vs. Computer:** Play against an AI opponent that makes random moves.
* **Live Scoreboard:** Tracks the User's and Computer's score in real-time.
* **Input Validation:** Prevents the game from crashing if invalid numbers are entered.
* **Infinite Play:** The game runs in a loop until the user decides to exit.

## 🧠 Concepts Used
* **Randomness (`rand()` & `srand()`):** used to generate unpredictable computer moves.
* **Modulo Operator (`%`):** Used to constrain random numbers to the range 1-3.
* **State Management:** Tracking variables for scores that persist through the loop.
* **Conditional Logic:** Complex `if-else` structures to determine the winner based on game rules.

## ⚙️ How to Run
1.  Ensure you have a C compiler (like GCC) installed.
2.  Compile the program:
    ```bash
    gcc rock_paper_scissors.c -o game
    ```
3.  Run the executable:
    ```bash
    ./game
    ```
## 👨‍💻 Purpose
This project was built to practice random number generation and game state logic in C.
