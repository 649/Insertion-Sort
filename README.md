# Insertion Sort

> Author: [@037](https://twitter.com/037)

### Compile
```
sudo g++ -std=c++11 -o InsertionSort.exe InsertionSort.cpp
```

### Input structure
The input starts with an integer number which indicates the number of elements (integers) to be sorted, n. Then, the elements follow, one per line.

### Output structure
Recall that Insertion Sort first sorts the first two elements (in non-decreasing order), then the first three elements, and so on. For each 2 <= k <= n, the script will output the first k elements (in non-decreasing order) in a separate line where each element is followed by ;. A new line is followed by an enter.

### Example

*Input*
```
6
5
3
2
1
6
4
```

*Output*
```
3;5;
2;3;5;
1;2;3;5;
1;2;3;5;6;
1;2;3;4;5;6;
```