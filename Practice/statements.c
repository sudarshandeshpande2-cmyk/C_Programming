/*
-----------------------------------------------------------------------------------------------------

🧠 Problem #1: Student Record System

Write a C program to manage student records using structures.

The program should:

1.Accept the number of students (N) from the user.
2.For each student, input the following details:
    Name
    Roll Number
    Marks in 3 subjects
3.For every student, calculate:
    Total marks
    Average marks
4.Assign a grade based on average marks:
    Grade A → Average ≥ 75
    Grade B → 60 ≤ Average < 75
    Grade C → 50 ≤ Average < 60
    Grade F → Average < 50
5.Display the details of all students including:
    Name
    Roll Number
    Total
    Average
    Grade
6.Identify and display the student with the highest average marks (Topper).
🎯 Constraints / Requirements
    Use structure (struct) to store student data
    Use array of structures
    Use functions for calculations and display
    Use loops for input and processing

-----------------------------------------------------------------------------------------------------

🧠 Problem #2: Search Student by Roll Number

Write a C program to manage student records using structures.

The program should:

1.Accept the number of students (N) from the user.
2.For each student, input the following details:
    Name
    Roll Number
    Marks in 3 subjects
3.For every student, calculate:
    Total marks
    Average marks
4.Ask the user to enter a roll number to search.
5.Search for the student using the given roll number:
    If found, display:
        Name
        Roll Number
        Total
        Average
    If not found, display:
        "Student not found"
🎯 Constraints / Requirements
    Use structure (struct) to store student data
    Use array of structures
    Use functions for calculations and display
    Use loop for searching

-----------------------------------------------------------------------------------------------------

🧠 Problem #3: Student Management System (Menu Driven)

Write a C program to manage student records using structures and a menu-driven approach.

🎯 Program Requirements
1. Accept number of students (N)

Store details for each student:

Name
Roll Number
Marks in 3 subjects
2. For every student, calculate:
Total marks
Average marks
⚙️ Menu Options (Core of this problem)

After input, repeatedly show menu:

1. Display All Students
2. Search Student by Roll Number
3. Find Topper
4. Sort Students by Total Marks
5. Exit
🔍 Option 1: Display All
Show details of all students
Use your existing display() function
🔍 Option 2: Search
Same as Problem #2
Search using roll number
🏆 Option 3: Find Topper
Student with highest total marks
Display that student

👉 Think:

max_total logic
🔄 Option 4: Sort Students
Sort students based on total marks (descending)

👉 Use:

simple sorting (bubble sort is enough)

Think:

swap structures
🚪 Option 5: Exit
Stop the program
🎯 Constraints
Use struct
Use array of structures
Use functions for:
calculate
display
search
sorting
Use loop + switch-case for menu
🧠 Important Thinking Points (DON’T SKIP)
💡 1. Infinite loop
while(1)
💡 2. Switch case
switch(choice)
💡 3. Swapping students

You can swap entire struct, not individual fields 😏

💡 4. Reuse your old code

👉 Problem #2 is directly reusable

🚀 Difficulty Level:

🟡 Medium → 🔴 Approaching Advanced

-----------------------------------------------------------------------------------------------------

















*/