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

#### More the just n
- The time complexity of your algorithms also depends on how many and what variables are contributing to your algorithm:
- Consider the following codeblock:
```c++
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        //code
    }
}
```
- The above codeblock will have the time complexity of O(nm)

### Complexity Cases
#### There will be, of course, common time complexities that you will face:
1. O(1): This is a constant-time algorithm where the time complexity of the algorithm is completely independent of the input. Usually this means that the algorithm uses some kinds of formulas to immediately give out the answer.
2. O(log(n)): A logarithmic algorithm indicates that on each step, the algorithm havles the input size once, making it super effective and fast. 
3. O(sqrt(n)): A square root algorithm is slower than a logarithmic algorithm, but faster than a linear one. It shows that in some sense, your algorithm is able to cut down the processing time by half.
4. O(n): A linear algorithm goes through each data point only once. This is usually the best that you can get when solving an algorithmic problem.
5. O(nlog(n)): This means that each operation will have the time complexity of O(nlog(n)). You will often see this time complexity when carrying out sorting algorithms.
6. O(n^2): A quadratic algorithm means that it goes through all pairs within the dataset, often containing two nested loops.
7. O(n^3): A cubic algorithm means that it goes through all triplets within the dataset, often containing three nested loops. 
8. O(2^n): This algorithm will go through all possible subsets within the dataset.
9. O(n!): This algorithm will go through all possible permutations within the dataset. 
#### Taking advantage of BigO Notation
- After analyzing the time complexity, it is possible to estimate whether your algorithm is suitable for the limits that the problem has set out. All problems will indicate the time limit and the input size. For example: time limit: 1 second, 0<n=10^6.
- Given the input size, you can combine the information the problem has given and the time complexity of your "idea algorithm". The table below is a rough estimation of what time complexity is suitable for each input size to achieve the time limit of 1 second:

|Input size |Required time complexity|
|-----------|------------------------|
|n<=10      |O(n!)                   |
|n<=20      |O(2^n)                  |
|n<=500     |O(n^3)                  |
|n<=5000    |O(n^2)                  |
|n<=10^6    |O(nlog(n)) or O(n)      |
|n>10^6     |O(log(n)) or O(1)       |
### Sorting algorithms
- Now to witness the power of the BigO Notation and why you should understand it, I will give out different sorting algorithms and analyze its effects when trying to sort an input with the size of 10^6.
#### Bubble Sort:
```c++
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```
#### Selection Sort:
```c++
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap elements
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

```
#### Merge Sort:
```c++
void merge(int arr[], int left, int mid, int right) {
    int size1 = mid - left + 1;
    int size2 = right - mid;

    // Create temporary arrays
    int leftArr[size1], rightArr[size2];

    // Copy data to temporary arrays
    for (int i = 0; i < size1; ++i) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < size2; ++j) {
        rightArr[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr
    int i = 0, j = 0, k = left;
    while (i < size1 && j < size2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }

    // Copy the remaining elements of leftArr, if any
    while (i < size1) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    // Copy the remaining elements of rightArr, if any
    while (j < size2) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
```
#### Quick Sort:
```c++
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; ++j) {
        if (arr[j] < pivot) {
            // Swap elements
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot with the element at the correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
```
#### The Analysis:

- Bubble Sort:

    - Average case: O((10^6)^2) = O(10^12) = O(1 trillion)
    - Worst case: O((10^6)^2) = O(10^12) = O(1 trillion)
    - Best case: O(10^6) = O(1 million)

- Selection Sort:

    - Average case: O((10^6)^2) = O(10^12) = O(1 trillion)
    - Worst case: O((10^6)^2) = O(10^12) = O(1 trillion)
    - Best case: O((10^6)^2) = O(10^12) = O(1 trillion)

- Merge Sort:

    - Average case: O(10^6 log(10^6)) = O(6 million)
    - Worst case: O(10^6 log(10^6)) = O(6 million)
    - Best case: O(10^6 log(10^6)) = O(6 million)

- Quick Sort:

    - Average case: O(10^6 log(10^6)) = O(6 million)
    - Worst case: O((10^6)^2) = O(10^12) = O(1 trillion) (unlikely with a random pivot choice, but possible with a bad pivot selection)
    - Best case: O(10^6 log(10^6)) = O(6 million)
### Summary:
- In summary, the time complexities for each algorithm with a dataset of size 10^6 are:

1. Bubble Sort and Selection Sort have a time complexity of O(1 trillion), which makes them highly inefficient for large datasets.

2. Merge Sort and Quick Sort have a time complexity of O(6 million), making them more efficient options for sorting a dataset of size 10^6.

- It can be deduced that with the input size of 10^6, Merge Sort and Quick Sort reigns supriority over Bubble Sort and Selection Sort. However, we can not say the same with other different sizes. Your choice of algorithm design is dependent on the information and detaild of the problem that needs to be solved, and by using BigO notation, you can estimate what design is the most suitable.
## Authors
- Huynh Khac Tam: [hkt456](https://github.com/hkt456)
- Huynh Gia Bao: [doctorbingchilling](https://github.com/doctorbingchilling)
