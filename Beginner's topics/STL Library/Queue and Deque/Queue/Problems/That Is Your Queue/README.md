# That is Your Queue UVA - 12207 
> Link to the problem: [VJUDGE](https://vjudge.net/problem/UVA-12207)
## Description
Your government has finally solved the
problem of universal health care! Now
everyone, rich or poor, will finally have
access to the same level of medical care.
Hurrah!
There’s one minor complication. All
of the country’s hospitals have been condensed down into one location, which can
only take care of one person at a time.
But don’t worry! There is also a plan
in place for a fair, efficient computerized
system to determine who will be admitted. You are in charge of programming
this system.
Every citizen in the nation will be assigned a unique number, from 1 to P
(where P is the current population). They will be put into a queue, with 1 in front of 2, 2 in front of
3, and so on. The hospital will process patients one by one, in order, from this queue. Once a citizen
has been admitted, they will immediately move from the front of the queue to the back.
Of course, sometimes emergencies arise; if you’ve just been run over by a steamroller, you can’t wait
for half the country to get a routine checkup before you can be treated! So, for these (hopefully rare)
occasions, an expedite command can be given to move one person to the front of the queue. Everyone
else’s relative order will remain unchanged.
Given the sequence of processing and expediting commands, output the order in which citizens will
be admitted to the hospital.
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