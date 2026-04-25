# 📘 Problem 1: Input and Display Array Elements

## 🧠 Problem Statement

Write a C program to:

1. Accept `n` elements from the user  
2. Store them in an array  
3. Display all elements in the same order

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store all values in an integer array

- Print the array elements exactly in input order

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Array elements are: 10 20 30 40 50

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Array declaration
- Taking input using loop
- Printing output using loop
- Indexing (`arr[i]`)
- Basic validation

---

# 📘 Problem 2: Sum of Array Elements

## 🧠 Problem Statement

Write a C program to calculate the **sum of all elements in an array**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store the values in an integer array

- Calculate the sum of all elements using a loop

- Display the final sum

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Sum = 150

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Array traversal
- Accumulator variable (`sum`)
- Loop-based addition
- Input validation
- Clean output formatting

---
# 📘 Problem 3: Average of Array Elements

## 🧠 Problem Statement

Write a C program to calculate the **average of all elements in an array**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store the values in an integer array

- Calculate:
  - Sum of all elements
  - Average of elements

- Display average up to **2 decimal places**

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Average = 30.00

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Reuse sum logic
- Integer vs floating-point division
- Typecasting in C
- Output formatting using `%.2f`

---
# 📘 Problem 4: Find Largest Element in Array

## 🧠 Problem Statement

Write a C program to find the **largest element** in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store all values in an integer array

- Find the maximum value using a loop

- Display the largest element

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 25 7 89 34

### Output

Largest element = 89

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Comparison logic using `if`
- Tracking maximum value
- Array traversal
- Initialization strategy

---
# 📘 Problem 5: Find Smallest Element in Array

## 🧠 Problem Statement

Write a C program to find the **smallest element** in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store all values in an integer array

- Find the minimum value using a loop

- Display the smallest element

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 25 7 89 34

### Output

Smallest element = 7

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Comparison logic using `if`
- Tracking minimum value
- Array traversal
- Initialization strategy


---

## 🧠 Hint

Initialize minimum using the **first element** of the array, not `0`.

---

# 📘 Problem 6: Find Maximum and Minimum in Array

## 🧠 Problem Statement

Write a C program to find both the **largest** and **smallest** elements in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store all values in an integer array

- Find:
  - Largest element
  - Smallest element

- Display both values

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 12 45 7 89 23

### Output

Largest element = 89  
Smallest element = 7

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Tracking two variables simultaneously
- Array traversal
- Comparison logic
- Efficient one-pass solution

---


## 🧠 Hint

Initialize both maximum and minimum using the **first element**.

---
# 📘 Problem 7: Search Element in Array (Linear Search)

## 🧠 Problem Statement

Write a C program to search for a given element in an array using **Linear Search**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array
  - Element to search

- Store values in an integer array

- Search the array from left to right

- If element is found, display its **position** (1-based index)

- If element appears multiple times, display the **first occurrence**

- If not found, print an appropriate message

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50  
Enter element to search: 30

### Output

Element found at position 3

---

## 📌 Example 2

### Input

Enter number of elements: 5  
Enter elements: 7 9 2 9 1  
Enter element to search: 9

### Output

Element found at position 2

---

## 📌 Example 3

### Input

Enter number of elements: 4  
Enter elements: 5 8 1 6  
Enter element to search: 10

### Output

Element not found

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Array traversal with condition checking
- Searching logic
- Early termination using `break`
- Position vs index understanding

---

## 🧠 Hint

Use a flag variable **or** store found position.

---


# 📘 Problem 8: Count Even and Odd Elements in Array

## 🧠 Problem Statement

Write a C program to count how many **even** and **odd** elements are present in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store values in an integer array

- Traverse the array and count:
  - Total even elements
  - Total odd elements

- Display both counts

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 10 21 30 47 50

### Output

Even elements = 3  
Odd elements = 2

---

## 📌 Example 2

### Input

Enter number of elements: 4  
Enter elements: 7 9 11 13

### Output

Even elements = 0  
Odd elements = 4

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Modulus operator `%`
- Conditional counting
- Array traversal
- Multiple counters in one loop

---
# 📘 Problem 9: Reverse Print Array Elements

## 🧠 Problem Statement

Write a C program to display the elements of an array in **reverse order**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store values in an integer array

- Print all array elements starting from the last element to the first element

- Do **not** modify the original array

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Reverse order: 50 40 30 20 10

---

## 📌 Example 2

### Input

Enter number of elements: 4  
Enter elements: 7 9 1 6

### Output

Reverse order: 6 1 9 7

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Reverse traversal
- Understanding indexes
- Array access without modifying data
- Loop control using decrement

---

## 🧠 Hint

Start loop from:

```c
n - 1