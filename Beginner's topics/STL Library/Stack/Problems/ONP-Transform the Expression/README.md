# ONP - Transform the Expression

> Link to the problem: [SPOJ](https://www.spoj.com/problems/ONP/)
## Description
- Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Assume that there is only one RPN form (no expressions like a*b*c).
### Input
- t [the number of expressions <= 100]
- expression [length <= 400]
- [other expressions]
### Output
- The expressions in RPN form, one per line. 

### Example
#### Input:
```c++
3
(a+(b*c))
((a+b)*(z+x))
((a+t)*((b+(a+c))^(c+d)))
```
#### Output:
```c++
abc*+
ab+zx+*
at+bac++cd+^*
```
### Solution
- To solve this problem, we need to transform the expression to RPN form.
- The idea behind the algorithm is even simpler than the previous problem. This time we will go through each character within the formula and process it depending on the definition of RPN. 