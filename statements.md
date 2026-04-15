# 📘 C Programming Problem Statements

---

## 🧠 Problem 1: Student record system

### 📌 Problem statement
Write a C program to manage student records using structures.

---

### 🎯 Requirements

1. Accept the number of students (N) from the user.

2. For each student, input the following details:
    - Name
    - Roll Number
    - Marks in 3 subjects

3. For every student, calculate:
    - Total marks
    - Average marks

4. Assign a grade based on average marks:
   - Grade A → Average ≥ 75  
   - Grade B → 60 ≤ Average < 75  
   - Grade C → 50 ≤ Average < 60  
   - Grade F → Average < 50  

5. Display the details of all students including:
   - Name  
   - Roll Number  
   - Total  
   - Average  
   - Grade  

6. Identify and display the student with the highest average marks (Topper).

---

### ⚙️ Constraints / Requirements

- Use `struct` to store student data  
- Use array of structures  
- Use functions for calculations and display  
- Use loops for input and processing  

---
## 🧠 Problem 2: Search Student by Roll Number

### 📌 Problem Statement
Write a C program to manage student records using structures and search for a student using roll number.

---

### 🎯 Requirements

1. Accept the number of students (N) from the user.

2. For each student, input the following details:
   - Name  
   - Roll Number  
   - Marks in 3 subjects  

3. For every student, calculate:
   - Total marks  
   - Average marks  

4. Ask the user to enter a roll number to search.

5. Search for the student using the given roll number:
   - If found, display:
     - Name  
     - Roll Number  
     - Total  
     - Average  
   - If not found, display:
     - "Student not found"  

---

### ⚙️ Constraints / Requirements

- Use `struct` to store student data  
- Use array of structures  
- Use functions for calculations and display  
- Use loop for searching  

---
## 🧠 Problem 3: Student Management System (Menu Driven)

### 📌 Problem Statement
Write a C program to manage student records using structures and a menu-driven approach.

---

### 🎯 Requirements

1. Accept the number of students (N).

2. For each student, input the following details:
   - Name  
   - Roll Number  
   - Marks in 3 subjects  

3. For every student, calculate:
   - Total marks  
   - Average marks  

---

### ⚙️ Menu Options

After input, repeatedly display the following menu:

1. Display All Students  
2. Search Student by Roll Number  
3. Find Topper  
4. Sort Students by Total Marks  
5. Exit  

---

### 🔍 Option 1: Display All
- Display details of all students  
- Use your existing `display()` function  

---

### 🔍 Option 2: Search
- Search student using roll number  
- If found, display student details  
- If not found, display "Student not found"  

---

### 🏆 Option 3: Find Topper
- Identify student with highest total marks  
- Display that student  

---

### 🔄 Option 4: Sort Students
- Sort students based on total marks (descending)  
- Use simple sorting (e.g., Bubble Sort)  
- Swap entire structures  

---

### 🚪 Option 5: Exit
- Terminate the program  

---

### ⚙️ Constraints / Requirements

- Use `struct` to store student data  
- Use array of structures  
- Use functions for:
  - calculate  
  - display  
  - search  
  - sorting  
- Use loop + `switch-case` for menu  

---

### 🧠 Important Concepts

- Infinite loop using `while(1)`  
- Menu handling using `switch-case`  
- Swapping entire structures  
- Reuse logic from previous problems  

---

### 🚀 Difficulty Level

🟡 Medium → 🔴 Approaching Advanced

---

# Problem 4: Sum and Average of Array Elements

## Problem Statement:
Write a C program to calculate the **sum and average of elements in an array**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Calculate:
  - Sum of all elements
  - Average of elements

- Display both results

---

## Example:

### Input:

Enter number of elements: 5
Enter elements: 10 20 30 40 50


### Output:

Sum = 150
Average = 30.00


---

## Constraints:
- 1 ≤ n ≤ 100

---

## Expected Learning Outcomes:
- Array traversal
- Accumulation using loops
- Typecasting for accurate average

# Problem 5: Find Largest Number in an Array

## Problem Statement:
Write a C program to find the **largest element in an array**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Find and display the **largest number** among them.

---

## Example:

### Input:

- Enter number of elements: 5
- Enter elements: 10 25 7 89 34

### Output:
- Largest number = 89

---

## Constraints:
- 1 ≤ n ≤ 100

---

## Expected Learning Outcomes:
- Array basics
- Loop usage
- Comparison logic (if condition)

# Problem 6: Find Second Largest Element in an Array

## Problem Statement:
Write a C program to find the **second largest element** in an array.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Find and display the **second largest number**.

---

## Example:

### Input:

Enter number of elements: 5
Enter elements: 10 25 7 89 34


### Output:

Second largest number = 34


---

## Important Notes:
- The second largest element must be **different from the largest**
- If all elements are same or no second largest exists, print:

No second largest element


---

## Constraints:
- 1 ≤ n ≤ 100

---

## Expected Learning Outcomes:
- Advanced comparison logic
- Handling edge cases
- Multiple variable tracking (largest & second largest)

# Problem 7: Input and Display Array Elements

## Problem Statement:
Write a C program to:

1. Accept n elements from the user  
2. Store them in an array  
3. Display all elements  

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Display all elements in the same order

---

## Example:

### Input:
Enter number of elements: 5  
Enter elements: 10 20 30 40 50  

### Output:
Array elements are: 10 20 30 40 50  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Array input/output
- Loop usage
- Basic program structure

# Problem 8: Sum of Array Elements

## Problem Statement:
Write a C program to calculate the **sum of all elements in an array**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Calculate the sum of all elements
- Display the result

---

## Example:

### Input:
Enter number of elements: 5  
Enter elements: 10 20 30 40 50  

### Output:
Sum = 150  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Accumulation using loops
- Understanding variable initialization
- Building on array traversal

# Problem 9: Average of Array Elements

## Problem Statement:
Write a C program to calculate the **average of elements in an array**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Calculate the average of all elements
- Display the result up to 2 decimal places

---

## Example:

### Input:
Enter number of elements: 5  
Enter elements: 10 20 30 40 50  

### Output:
Average = 30.00  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Typecasting in C
- Integer vs float division
- Precision handling in output
# Problem 10: Find Maximum and Minimum in Array

## Problem Statement:
Write a C program to find the **maximum and minimum elements** in an array.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Find:
  - Maximum element
  - Minimum element

- Display both values

---

## Example:

### Input:
Enter number of elements: 5  
Enter elements: 12 45 7 89 23  

### Output:
Maximum = 89  
Minimum = 7  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Array traversal  
- Comparison logic  
- Using variables to track max/min  
# Problem 11: Find Second Largest Element in Array

## Problem Statement:
Write a C program to find the **second largest element** in an array.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Find:
  - Second largest element

- If second largest does not exist (e.g., all elements are same), display:
  Second largest element not found

---

## Example 1:

### Input:
Enter number of elements: 5  
Enter elements: 10 20 30 40 50  

### Output:
Second Largest = 40  

---

## Example 2:

### Input:
Enter number of elements: 4  
Enter elements: 5 5 5 5  

### Output:
Second largest element not found  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Advanced array traversal  
- Handling edge cases  
- Tracking multiple values (largest & second largest)  
- Conditional logic refinement  