# Project 001: Robust CLI Calculator
**Part of the 200-Project C++ Mastery Roadmap**

## 📌 Overview
This is the first project in a systematic series designed to master C++ for engineering applications. It is a functional Command Line Interface (CLI) calculator that performs basic arithmetic while focusing on clean control flow, type aliasing, and error prevention.

## 🛠️ Features
- **High Precision:** Uses `double` precision for all calculations.
- **Error Handling:** Detects and prevents **Division by Zero** to avoid runtime crashes.
- **Input Validation:** A `default` case handles unsupported operators gracefully.
- **Type Aliasing:** Implements `using num = double;` for better code maintainability.

## 🧠 Key Technical Concept: Switch-Case Fallthrough
A major focus of this project was managing **Fallthrough** in C++. 

In a `switch` statement, if a `break;` is missing, the program continues executing the code in the subsequent `case` blocks even if the conditions do not match. This project implements explicit `break` statements to ensure only the chosen operation is executed.

### The Problem (Without `break`):
If a user selects `+`, the program calculates the sum, but then immediately "falls through" to subtraction, then multiplication, overwriting the `result` variable at every step.

### The Solution (With `break`):
The `break` keyword acts as an exit door, forcing the program to leave the `switch` block as soon as the specific operation is complete.

## 🚀 How to Run (Windows/CMD)
Since this project was developed in a Windows environment, follow these steps to compile and run:

1. **Open CMD** and navigate to the project directory.
2. **Compile the code:**
   ```cmd
   g++ main.cpp -o Calculator.exe
   ```
3. ***Run the application:**
    ``` DOS
     Calculator.exe
     ```
## Usage Example
    
    --------------enter first number----------------------- 
    10
    --------------enter second number----------------------- 
    2
    --------------choose the operation-----------------------
    	 +,-,*,/    :===>   	/
    --------------------------------------------------------
    	10 / 2
    ------------------------------------------------------
    	Solution :====> 	5
    ---------------------------END---------------------------```
