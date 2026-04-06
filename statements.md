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