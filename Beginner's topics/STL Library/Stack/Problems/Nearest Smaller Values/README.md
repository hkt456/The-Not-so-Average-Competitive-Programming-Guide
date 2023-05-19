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
### Solution
- The idea behind the algorithm is that we take into account all the elements in the inputs. If at the top of the stack exists a value that is smaller than the element we are considering, that element will be the "nearest smaller values to be found". If the element at the top of the stack does not qualify, it will get deleted because now, the elemet we are considering will be the potential "nearest smaller value" for the following elements in the array. 
- In a nutshell, we are using the stack data struture as candidate list for the "nearest smaller value" for the upcoming elements, and those candidates will be eliminated the moment we find a more potential and suitable candidate.