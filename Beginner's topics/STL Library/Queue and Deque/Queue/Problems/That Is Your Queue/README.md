# That is Your Queue UVA - 12207 
> Link to the problem: [VJUDGE](https://vjudge.net/problem/UVA-12207)
## Description
- Your government has finally solved the
problem of universal health care! Now
everyone, rich or poor, will finally have
access to the same level of medical care.
Hurrah!
There’s one minor complication. All of the country’s hospitals have been condensed down into one location, which can only take care of one person at a time. But don’t worry! There is also a plan in place for a fair, efficient computerizedvsystem to determine who will be admitted. You are in charge of programmingvthis system. Every citizen in the nation will be assigned a unique number, from 1 to P (where P is the current population). They will be put into a queue, with 1 in front of 2, 2 in front of 3, and so on. The hospital will process patients one by one, in order, from this queue. Once a citizen has been admitted, they will immediately move from the front of the queue to the back. Of course, sometimes emergencies arise; if you’ve just been run over by a steamroller, you can’t wait for half the country to get a routine checkup before you can be treated! So, for these (hopefully rare)
occasions, an expedite command can be given to move one person to the front of the queue. Everyone
else’s relative order will remain unchanged.
Given the sequence of processing and expediting commands, output the order in which citizens will
be admitted to the hospital.
### Input
- Input consists of at most ten test cases. Each test case starts with a line containing P, the population
of your country (1 ≤ P ≤ 1000000000), and C, the number of commands to process (1 ≤ C ≤ 1000).
The next C lines each contain a command of the form ‘N’, indicating the next citizen is to be
admitted, or ‘E x’, indicating that citizen x is to be expedited to the front of the queue.
The last test case is followed by a line containing two zeros.
### Output
- For each test case print the serial of output. This is followed by one line of output for each ‘N’ command,
indicating which citizen should be processed next. Look at the output for sample input for details.

### Example
#### Input:
```c++
3 6
N
N
E 1
N
N
N
10 2
N
N
0 0
```
#### Output:
```c++
Case 1:
1
2
1
3
2
Case 2:
1
2
```
### Solution
- The idea behind the algorithm is that we take into account all the elements in the inputs. If at the top of the stack exists a value that is smaller than the element we are considering, that element will be the "nearest smaller values to be found". If the element at the top of the stack does not qualify, it will get deleted because now, the elemet we are considering will be the potential "nearest smaller value" for the following elements in the array. 
- In a nutshell, we are using the stack data struture as candidate list for the "nearest smaller value" for the upcoming elements, and those candidates will be eliminated the moment we find a more potential and suitable candidate.