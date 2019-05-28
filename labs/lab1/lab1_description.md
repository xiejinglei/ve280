## Lab I

### 1. Apocalyptic numbers

A number of the form $2^n$ is called *Apocalyptic* if its digits contain "666" as a substring. For example, the smallest apocalyptic number is $2^{157}$, which is equal to (in decimal) 

$$182687704\underline{666}362864775460604089535377456991567872$$

A number $n$ such that $2^n$ is apocalyptic is called *Apocalyptic power* or *Apocalyptic exponent*.



#### Input:

A single integer $n$ where $157\leq n\leq 50000$. The input integer is guaranteed to be valid.



#### Output:

If $2^n$ is apocalyptic, print $1$. Otherwise, print $0$. The newline character does not affect the result.



#### Hint:

It's not hard to observe that the numbers we are dealing with exceed the range of `int` or even `long long int` type in C/C++. Therefore, the key point here is to store such a big number using C/C++.



### Reference

[1] Apocalyptic numbers http://www.numbersaplenty.com/set/apocalyptic_number/