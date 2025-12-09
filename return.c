int add(int a, int b) {
    return a + b;  // Returns the sum of a and b
}

int main() {
    int result = add(5, 3);
    printf("Result: %d\n", result);
    return 0;
}

////Expected Interview Quesions On Above snippet


✅ Interview Questions Based on This Code
1. What is the purpose of the add() function?

Expected answer:
It is a user-defined function that takes two integers and returns their sum.

2. How are function arguments passed in C?

Expected answer:
Arguments in C are passed by value, meaning a copy of the variable is passed, not the original variable.

3. What is the return type of add()? Why is it needed?

Expected answer:
Return type is int.
It tells the compiler what kind of data the function will return.

4. Explain what happens in memory when add(5,3) is called.

Expected answer:

A stack frame is created.

Values 5 and 3 are copied into parameters a and b.

CPU performs addition.

Result is returned to the caller.

5. What is printf()? How does it work in embedded systems?

Expected answer:
printf is a standard I/O function used to print formatted text.
In embedded systems, it usually prints through:

UART

SWO

USB CDC

It is not always available unless implemented.

6. Why do we return 0 from main()?

Expected answer:
It indicates successful program termination.
(Some embedded systems never return from main and run an infinite loop.)

7. What is the difference between function declaration and definition?

Expected answer:

Declaration: tells compiler about the function (prototype).

Definition: contains actual code of the function.

In this program:

Definition: int add(int a, int b)

8. Where is the variable result stored?

Expected answer:
result is a local variable stored on the stack.

9. Can we write add() inside main()?

Expected answer:
No, C does not support nested functions (except GCC extension).

10. What happens if the function does not return a value?

If return type is int and no return is written → undefined behavior.

🔥 Embedded-Specific Interview Questions
11. Is this code re-entrant?

Expected answer:
Yes, because:

No global/static variables

No shared resources

It can be safely called from multiple contexts.

12. Can this function be used in an interrupt?

Expected answer:
Yes, only if:

It executes quickly

Does not call printf
printf() is not interrupt-safe.
