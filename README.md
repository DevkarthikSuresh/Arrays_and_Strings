# Arrays_and_Strings
Experiment 7


## AIM
To study use of and to implement arrays and strings in C++.

## Theory

### Arrays in C++
An array is a data structure of elements with same data type stored at contiguous memory locations. 
![image](https://github.com/user-attachments/assets/22f534ee-3dbc-4249-b0e6-a2d5f40e1371)


**Features :**
- Fixed size: The size of an array after being defined cannot be changed later.
- Contiguous memory allocation: All elements are stored in continuous memory blocks.
- Index-based: Array elements can be accessed using thier indices.

**Example:**
An array of 5 integers
```cpp
int a[5]; 
```
<br>


### Strings in C++
Strings are sequences of characters used to store text. In C++, the `string` class is defined in the ```<string>``` header file. There are two types of strings in C++ : <br>
1. C style Strings
2. std : : string

**Features:**
- Iteration: Strings support iterations for traversing thier contents.
- Concatenation: Strings can be concatenated using the `+` operator.
- Indexing: Strings support indexing, allowing access to individual characters using the `[]` operator.
- Comparison: Strings can be compared using operators `(==, !=, <, >, etc.)`.
- Modification: Characters in a string can be modified through direct indexing.

**Example:**
An array of strings
```cpp
string str1 = "Hello"; 
```
## Algorithms
### Checking Palindrome


1. **Input the String:**
   - Ask the user to enter a string.

2. **Initialize Variables:**
   - Store the input string in a variable, `a`.
   - Initialize an empty string, `revstr`.

3. **Determine the Length:**
   - Calculate the length of `a` and store it in `length`.

4. **Reverse the String:**
   - Loop from the end of the string to the beginning:
     - Append each character to `revstr`.

5. **Compare the Strings:**
   - Compare the original string `a` with the reversed `revstr`.
   - If `a` == `revstr`, the string is a palindrome.
   - Else not a palindrome.

6. **Output the Result:**
   - Print whether the string is a palindrome or not based on the comparison.


## Printing Array Elements

1. **Initialize the Array:**
   - Define an array `x` as  `{19, 10, 8, 6, 8}`.

2. **Loop Through Array:**
   - Use `for` loop in the array.

3. **Print Each Element:**
   - print each element of the array using the loop.

4. **End Program:**



## Search in an Array


1. **Initialize Variables:**
   - Define a variable `key` to store the user's input.
   - Define an integer `i` for loop iteration.
   - Define an array `x` with 5 elements `{34, 56, 78, 90, 20}`.

2. **Input the Key:**
   - Ask the user to enter a number and store it in `key`.

3. **Search for the Key:**
   - Use `for` loop over the array `x`.
   - check `x[i]` with `key` in the loop.

4. **Check for Match:**
   - If (`key == x[i]`), print `i` where the key is found and exit the loop using `break`.

5. **If Not Found:**
   - After the loop, if no match is found (`i == 5`), print "Number not found".

6. **End Program:**


