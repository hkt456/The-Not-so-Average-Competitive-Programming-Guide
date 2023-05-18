# BigO Notation
> Basic techniques
## Descrition
- In competitive programming, what differs you from other is whether you can design and code an effective and fast algorithm - solves the problem quickly and does not take up much space. In short, you are learning to design the best algorithm possible. If your algorithm runs too slowly, it will get partial points or even no points at all!
- BigO notation provides you a way to measure the effeciency of your algorithm. The whole idea behind the notation is a function whose parameter is the size of the input. By calculating and reading the BigO notation, you will be able to find out whether your algorithm is suitable without having to code it.

### Calculations
- BigO notation takes place in the form of O(...), where "..." represents some kind of function. Usually, we use N to denote the input size: if you have a vector as the input, n will be the size of the vector, and so on.

#### Loops

- Loops are perhaps the killer of your algorithm. The more loops you use inside your algorithm, the longer it should take to process your input. The more nested loops the algorithm contains, the longer it will take to finish.
If there are k nested loops, the time complexity of the algorithm will be: O(n^k).

- For example, the time complexity of this code block is O(n):
```c++
for(int i=0; i<n; i++){
    //code
}
```
- The time complexity of this code block will be O(n^2):
```c++
for(int i=0; i<n; i++){
    for(int j=o; j<n; j++){
        //code
    }
}
```

#### Magnitude Only
- An important thing to take note when working with BigO notation is that it DOES NOT represents how many times your code block will be executed, only the order of magnitude. The below code blocks have different increments and limits to their loops, but all of them have the time complexity of O(n):

- Example 1:
```c++
for(int i=0; i<=23*n; i++){
    //code
}
```

- Example 2:
```c++
for(int i=0; i<=n+5; i++){
    // code
}
```

- Example 3:
```c++
for(int i=0; i<=n; i+=5){
    // code
}
```
#### What codeblock to consider?
- Almost all the times, your program will consist of a lot of loops and other components, each of them will most likely have their own different time complexity. However, when considering the time complexity of your algorithm as a whole, you will only need to take into account the time complexity of the slowest "loops", or "code phase" to be more exact. 
- Consider the following codeblock:
```c++
for(int i=0; i<n; i++){
    // code
}
for(int i=0; i<n ;i++){
    for(int j=0; j<n; j++){
    // code
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<n ; j++){
        for(int m=0; m<n; m++){
            //code
        }
    }
}
```
- Notice how the time complexity of each of the loops vary, namely O(n), O(n^2), and O(n^3). Given that the third loop will take the longest to run based on its time complexity, the time complexity of the whole algorithm will be O(n^3).
## Authors
- Huynh Khac Tam: [hkt456](https://github.com/doctorbingchilling)
- Huynh Gia Bao: [doctorbingchilling](https://github.com/doctorbingchilling)
i