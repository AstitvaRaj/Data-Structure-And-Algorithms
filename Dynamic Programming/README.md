# Dynamic Programming

Dynamic Programming (DP) is a method for solving complex problems by breaking them down into simpler subproblems. It is applicable when the problem can be divided into overlapping subproblems which can be solved independently.

## Key Concepts

1. **Optimal Substructure**: A problem has an optimal substructure if an optimal solution can be constructed efficiently from optimal solutions of its subproblems.
2. **Overlapping Subproblems**: A problem has overlapping subproblems if the same subproblems are solved multiple times.

## Steps to Solve a DP Problem

1. **Define the State**: Determine the state variables that represent the subproblems.
2. **State Transition**: Formulate the relationship between the current state and the previous states.
3. **Base Cases**: Identify the base cases and their values.
4. **Compute the Result**: Use the state transition to compute the result iteratively or recursively.

## Common DP Problems

- **Fibonacci Sequence**: Calculate the nth Fibonacci number.
- **Knapsack Problem**: Determine the maximum value that can be obtained from a set of items with given weights and values.
- **Longest Common Subsequence**: Find the longest subsequence common to two sequences.
- **Matrix Chain Multiplication**: Determine the most efficient way to multiply a given sequence of matrices.
- **0/1 Knapsack Problem**: Determine the maximum value that can be obtained from a set of items with given weights and values, where each item can be included or excluded.
- **Coin Change Problem**: Find the minimum number of coins needed to make a certain amount of change.
- **Edit Distance**: Calculate the minimum number of operations required to convert one string into another.
- **Subset Sum Problem**: Determine if there is a subset of a given set with a sum equal to a given target.
- **Rod Cutting Problem**: Determine the maximum profit obtainable by cutting a rod into pieces of given lengths and prices.
- **Longest Increasing Subsequence**: Find the longest subsequence of a sequence in which the elements are in sorted order.
- **Palindromic Substrings**: Count the number of palindromic substrings in a given string.
- **Partition Problem**: Determine if a given set can be partitioned into two subsets with equal sum.
- **Word Break Problem**: Determine if a given string can be segmented into a space-separated sequence of dictionary words.
- **Maximum Subarray Problem**: Find the contiguous subarray within a one-dimensional array of numbers which has the largest sum.

## Mixed DP and Data Structures Problems

- **Fibonacci Heap**: Implement a priority queue using a Fibonacci heap to achieve better amortized time complexity for operations.
- **Segment Tree with Lazy Propagation**: Use a segment tree with lazy propagation to efficiently handle range queries and updates.
- **Trie with DP for Word Break**: Combine a trie data structure with dynamic programming to solve the word break problem efficiently.
- **DP with Fenwick Tree (Binary Indexed Tree)**: Use a Fenwick tree to optimize range sum queries in dynamic programming problems.
- **Sparse Table for Range Minimum Query**: Implement a sparse table to handle range minimum queries efficiently, often used in DP problems.
- **DP with Union-Find for Connected Components**: Use the union-find data structure to manage connected components in dynamic programming problems.
- **DP with Graph Algorithms (Dijkstra's, Floyd-Warshall)**: Combine dynamic programming with graph algorithms to solve shortest path problems.
- **DP with HashMap for Subarray Problems**: Use a hash map to optimize subarray sum problems in dynamic programming.
- **DP with Stack for Histogram Problems**: Use a stack to solve the largest rectangle in histogram problem with dynamic programming.
- **DP with Queue for Sliding Window Problems**: Use a deque to optimize sliding window maximum problems in dynamic programming.
- **DP with AVL Tree for Range Queries**: Use an AVL tree to handle range queries efficiently in dynamic programming problems.
- **DP with Suffix Array for String Matching**: Combine suffix arrays with dynamic programming to solve advanced string matching problems.
- **DP with Priority Queue for Job Scheduling**: Use a priority queue to optimize job scheduling problems in dynamic programming.
- **DP with Linked List for Memory Efficient Solutions**: Use a linked list to manage memory efficiently in dynamic programming problems.


## Example: Fibonacci Sequence

### Recursive Approach in C++
```cpp
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

### Dynamic Programming Approach in C++
```cpp
#include <vector>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    std::vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
```

## Conclusion

Dynamic Programming is a powerful technique for solving optimization problems. By breaking down problems into simpler subproblems and storing the results, DP can significantly reduce the time complexity of algorithms.
