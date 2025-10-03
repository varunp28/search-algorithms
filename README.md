# Search-Algorithms-in-Cpp 

**Aim:** To study different searching techniques in C++ and implement programs to search for elements in an array.  
**Tools:** GNU g++ compiler or any online C++ compiler.  

# Theory  

Searching is the process of finding a specific element in a data structure. There are several searching techniques, among which **linear search** and **binary search** are commonly used.  

- **Linear Search:** This is a simple method where each element of the array is checked sequentially until the desired element is found or the end of the array is reached. It does not require the array to be sorted.  
- **Binary Search:** This is an efficient search technique applicable only on **sorted arrays**. The array is repeatedly divided into two halves, and the search continues in the half that may contain the element. Binary search significantly reduces the number of comparisons compared to linear search.  

Important points:  
- Linear search has **O(n)** time complexity, whereas binary search has **O(log n)** time complexity.  
- Binary search requires the array to be **sorted** before searching.  
- Linear search works on both sorted and unsorted arrays.  

# **Program 1: Linear Search**  

### Logic:  
A function is created to search for the element in the array. The function iterates over all elements sequentially. Returns the index if the element is found, otherwise returns -1.  

### Algorithm:  
1. Start  
2. Input the size of the array.  
3. Input the array elements.  
4. Input the element to be searched.  
5. Iterate through the array:  
   - If element matches, return its index.  
   - Else continue.  
6. If not found, return -1.  
7. End  


# **Program 2: Sequential Search[Linear in main]**  

### Logic:  
The search is performed directly inside the `main()` function using a loop. A boolean flag keeps track of whether the element is found. If found, the index is printed; otherwise, a “not found” message is displayed.  

### Algorithm:  
1. Start  
2. Input the number of elements.  
3. Input the array elements.  
4. Input the element to be searched.  
5. Initialize a flag as false.  
6. Iterate through the array:  
   - If element matches, print index and set flag true.  
   - Break loop.  
7. If flag remains false, print element not found.  
8. End  


# **Program 3: Binary Search**  

### Logic:  
The array must be sorted. Two pointers (`left` and `right`) are used to track the current search interval. The middle element is compared with the target element. Depending on comparison, the search continues in the left or right half.  

### Algorithm:  
1. Start  
2. Input the number of elements.  
3. Input the sorted array elements.  
4. Input the element to be searched.  
5. Initialize `left = 0` and `right = size-1`.  
6. While `left <= right`:  
   - Calculate `mid = (left + right)/2`.  
   - If `arr[mid]` matches, return index.  
   - If `arr[mid] < element`, search in right half (`left = mid+1`).  
   - Else search in left half (`right = mid-1`).  
7. If element not found, return -1.  
8. End  


# **Conclusion**  
Linear and binary search are fundamental searching techniques. Linear search is simple and works on any array, while binary search is more efficient for sorted arrays. Understanding these methods is essential for designing efficient algorithms for data retrieval.
