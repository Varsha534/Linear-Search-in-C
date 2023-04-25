# Linear-Search-in-C

Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set.

![image](https://user-images.githubusercontent.com/125336949/234403980-cc2a5d38-4c6b-4b53-a8f5-994f39786930.png)

# Complexity Analysis of Linear Search:

# Time Complexity:

- Best Case: In the best case, the key might be present at the first index. So the best case complexity is O(1)
- Worst Case: In the worst case, the key might be present at the last index i.e., opposite to the end from which the search has started in the list. So the worst case complexity is O(N) where N is the size of the list.
- Average Case: O(N)

# Advantages of Linear Search:
- Linear search is simple to implement and easy to understand.
- Linear search can be used irrespective of whether the array is sorted or not. It can be used on arrays of any data type.
- Does not require any additional memory.
- It is a well suited algorithm for small datasets.

# Drawbacks of Linear Search:
- Linear search has a time complexity of O(n), which in turn makes it slow for large datasets.
- Not suitable for large arrays.
- Linear search can be less efficient than other algorithms, such as hash tables.
