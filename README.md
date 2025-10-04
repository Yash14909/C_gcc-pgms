
# 🧮 Simple Arithmetic Operations in C

## 📘 Overview

This C program performs **basic arithmetic operations** — Addition, Subtraction, Multiplication, and Division — based on the user’s choice.
It uses a **menu-driven approach** implemented through a `switch` statement.

---

## 🚀 Features

* Accepts two numbers from the user.
* Displays a menu of arithmetic operations.
* Performs the operation selected by the user.
* Handles invalid choices gracefully.

---

## 🧰 Technologies Used

| Component        | Description                                       |
| ---------------- | ------------------------------------------------- |
| **Language**     | C                                                 |
| **Compiler**     | GCC / Turbo C / Code::Blocks / Dev-C++            |
| **Input/Output** | `stdio.h` functions like `printf()` and `scanf()` |

---

## 🗂️ File Information

| File Name      | Description                                                |
| -------------- | ---------------------------------------------------------- |
| `arithmetic.c` | Contains the main C program code for arithmetic operations |
| `README.md`    | Documentation file explaining usage and setup              |

---

## 🧩 Code Explanation

### 🖋️ Header and Main Function

```c
#include<stdio.h>
int main()
{
    int a,b,c;
    ...
}
```

* `#include<stdio.h>` includes standard I/O functions.
* `main()` is the entry point of the program.

### 🧮 Input Section

```c
printf("Enter 1st no:");
scanf("%d",&a);
printf("Enter 2nd no:");
scanf("%d",&b);
```

* Takes two integer inputs from the user.

### 📋 Menu Options

```c
printf("\nPress-1 for Addition:");
printf("\nPress-2 for Subtraction:");
printf("\nPress-3 for Multiplication:");
printf("\nPress-4 for Division:");
```

* Displays the arithmetic operations menu.

### 🔄 Switch Case Logic

```c
switch(c)
{
  case 1: printf("Sum of a & b is: %d", a + b); break;
  case 2: printf("Subtraction of a & b is: %d", a - b); break;
  case 3: printf("Multiplication of a & b is: %d", a * b); break;
  case 4: printf("Division of a & b is: %d", a / b); break;
  default: printf("Enter a valid value"); break;
}
```

* Executes the selected operation.
* `default` handles invalid choices.

---

## 🖥️ Sample Output

### ✅ Example 1: Addition

```
Enter 1st no: 10
Enter 2nd no: 5

Press-1 for Addition:
Press-2 for Subtraction:
Press-3 for Multiplication:
Press-4 for Division:
Enter your choice: 1
Sum of a & b is: 15
```

### ✅ Example 2: Division

```
Enter 1st no: 20
Enter 2nd no: 4
Enter your choice: 4
Division of a & b is: 5
```

---

## ⚠️ Notes

* Integer division is used (`a / b`), so results are truncated for non-divisible numbers.
* To handle decimal results, you can modify variable types from `int` to `float`.
* Always ensure the second number (`b`) is not zero before performing division.

---

## 🧪 How to Run

### 🖥️ On Windows (Code::Blocks or Turbo C)

1. Open your IDE.
2. Create a new C project.
3. Paste the code into `main.c`.
4. Build and run.

### 💻 On Linux (GCC)

```bash
gcc arithmetic.c -o arithmetic
./arithmetic
```
---

## ✨ Author

**Developed by:** Yashvardhan Reddy
🎓 *For learning and demonstration of C control statements.*

---
