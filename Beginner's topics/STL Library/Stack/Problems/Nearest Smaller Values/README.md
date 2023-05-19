# Nearest Smaller Values
> Link to the problem: [CSES](https://cses.fi/problemset/task/1645/)
## Description
- Given an array of n integers, your task is to find for each array position the nearest position to its left having a smaller value.
### Input
- The first input line has an integer n: the size of the array.
- The second line has n integers x1,x2,…,xn : the array values.
### Output
- Print n integers: for each array position the nearest position with a smaller value. If there is no such position, print 0.
### Constraints
- 1≤n≤2⋅10^5
- 1≤xi≤10^9
### Example
#### Input:
```c++
8
2 5 1 4 8 3 2 5
```
#### Output:
```c++
0 1 0 3 4 3 3 7
```
