# Stack
> There's more to the language
## Descrition
- Stack is possibly the data structure with the easiest concept to grasp, but a find introductory the other Data Structure problem. In this chapter, we will discover what Stack is, its application in Competitive Programming and some Stack-related problems.
## Definition
- Stack is a Last-In-First-Out (LIFO) data structure. LIFO means that the last item pushed into the stack is the first item popped out where every operation will be conducted with the time complexity of O(1).

- Imagine Stack is like you "stack" up a bunch of golden coins. Everyday, you want to get a certain amount of coins for breakfast. You cannot possibly just grab out the coin from the bottom of the stack, you need to get the coins on the top of the stack first. Similarly, if you want to add more to the stack of coins, you will need to put the new coin on top of the stack, not slide it under the stack or it will collapse!

## How to use
- Some of the functions that you can use with the Stack data structure are:
```c++
empty(); // Returns whether the stack is empty; Time complexity: O(1)
size(); // Returns the current size of your stack; Time complexity: O(1)
top(); // Returns a reference to the top most element of the stack; Time complexity: O(1)
push(x); // Add the element x at the top of the stack; Time complexity: O(1)
pop(); // . Deletes the most recent added element to the stack ; Time complexity: O(1)
```
![stackimg](../../../assets/stackimg.png)

## Example
- Here is an example of Stack in C++ so that you can better understand it:
```c++
#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Get the size of the stack
    std::cout << "Size of stack: " << myStack.size() << std::endl;

    // Access the top element of the stack
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Pop elements from the stack
    myStack.pop();
    myStack.pop();

    // Get the new top element
    std::cout << "New top element: " << myStack.top() << std::endl;

    return 0;
}

```
## Some Problems
- In this same folder, I have added anothger folder dedicated to solving some examplary stack-related problems with my own editorials. You can go check it out.
## Authors
- Huynh Khac Tam: [hkt456](https://github.com/hkt456)
- Huynh Gia Bao: [doctorbingchilling](https://github.com/doctorbingchilling)
