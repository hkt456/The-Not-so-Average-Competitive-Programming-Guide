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
int n=0;
for(int i=0; i<n; i++){
    n++;
}
```



## Authors
- Huynh Khac Tam: [hkt456](https://github.com/doctorbingchilling)
- Huynh Gia Bao: [doctorbingchilling](https://github.com/doctorbingchilling)
i