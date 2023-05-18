# The Inclusion-Exclusion Principle
> You shall eleminate the overcountings!
## Description
- The Inclusion-Exclusion Principle is one of the fundamental mathematical principle and technique used in solving counting problems. It comes up in many competitive programming problems related to combinatorics. 
- To compute the size of a union of multiple sets, it is necessary to sum the sizes of these sets separately, and then subtract the sizes of all pairwise intersections of the sets, then add back the size of the intersections of triples of the sets, subtract the size of quadruples of the sets, and so on, up to the intersection of all sets.
- Intuitively, it's about trying to eleminate double counting when we calculate the size of a union of sets.
### Applications
- Let us consider a simple combinatorics problem. Calculate the number of ways that permutations of numbers from $0$ to $9$ exist such that the first element is greater than $1$ and the last one is less than $8$. This is a very standard problem in Combinatorics and should be easily doable.
- Solutions:
Let us denote the set of permutations of $0$ to $9$ where the first element is smaller or equal to $1$ is set X and the set of permutations of $0$ to $9$ where the last element greater or equal to $8$ is set Y.

Clearly, we can calculate the number of bad solutions by simply adding the size of two sets together and subtract the number of permutations where the first is both smaller or equal to $1$ and the last element is greater or equal to $8$. 

Formally, we can express it as follows: $|X \cap Y| = |X| + |Y| - |X \cup Y|$.

After that we can subtract from the total number of permutations by the number of "bad" permutations.

- Now consider a much harder problem about Combinatorics. This is a problem C from "Vietnamese Youth Informatics Competition 2021 - Division C". If you want the full problem then the here is the link to the problem: https://oj.vnoi.info/problem/tht21_kvc_permu. However, to accomodate all readers, a summary in English is presented here.
- Summary of the problem:

Let there be two positive integer n and q.
Let there be q segments $[l_{i},r_{i}]$.
Consider a set $S$ comprises of points from $1,2,3,\dots,n$ that at least is an element of one segment in q segments.
Let call a fixed point a point in position $p$ that also have value $p$ after applying a permutation.
Calculate the number of permutations of $n$ order such that there does not exist any fixed point in the set $S$.

- Hints:

Does it matter that the q segments are disjointed at all? If so, prove that it does. If not, what can we infer from it?

- Solutions:

Since the disjointedness of the q segments does not affect the answer. We can reduce the problem to finding the number of permutations of $n$ order such that the first k elements can not be fixed points. 

Let us now denote $G[x]$ as the number of permutations of $n$ order that has at least x fixed points in the first k position.

We can calculate $G[x] = C^{x}_{k} * (n-x)!.$

Applying the Inclusion-Exclusion Principle, the number of permutations that the first k elements can't be fixed point are as follows:

$S = G[0] - G[1] + \dots \pm G[k]$.

The code is left up to the reader to write for themselves. Remember to use basic concepts and algorithms that you learn in order to caculate the necessary elements.

### Tips

- For many the problems, the application of the Inclusion-Exclusion Principle is more subtle and often times not straightforward. The aforementioned example makes it easy for us to caculate the union of triplets, quadruples and so on but there are no guarantee that it should be that way.

- To practice, it is also recommended that you should do pure Combinatoric problems that appear in Math book. Some of the math books provides instructive mathematical techniques that can aid you in not only recognizing when to use Inclusion-Exclusion Principle but also generally benefits your problem-solving skills.

### Further Readings and Problems
Problems:
- [SPOJ - Almost Prime Numbers Again](https://www.spoj.com/problems/KPRIMESB/)
- [SPOJ - Find Number of Pair of Friends](https://www.spoj.com/problems/IITKWPCH/)
- [2021 ICPC Vietnam - Planning Tree](https://oj.vnoi.info/problem/icpc21_mn_b?fbclid=IwAR29ZvwW3TK3-cFesIOoSRaGzrd18Ud2BlDp1_losreuTmUpwYVwCYmYQWs)

Recommended readings:
- Counting and Configuration - Jiri Herman, Radan Kucera, Jaromir Simsa.
- Mathematical Olympiad Series, Vol.4: Combinatorial Problems on Mathematical Competitions - Yao Zhang.
- Problem-Solving Methods in Combinatorics - Pablo Soberon Bravo.
