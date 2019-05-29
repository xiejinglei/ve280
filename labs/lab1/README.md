# Lab I

## 1. Magnanimous numbers

A number (which we assume of **at least 2 digits**) such that the sum obtained inserting a "+" among its digit in any position gives a prime.

For example, 4001 is *magnanimous* because the numbers

- 4+001=5

- 40+01=41

- 400+1=401

  are all prime numbers.

### Input:

A single integer **n** where **10<=n<=2<sup>31</sup>-1**. The input integer is guaranteed to be a valid integer.

### Output:

If **n** is magnanimous, print **1**. Otherwise, print **0**. The newline character does not affect the result.



## 2. Jordan-Polya numbers

A number that can be written as the **product of factorial numbers**.

For example, **92160** is *Jordan-Polya* because the numbers because 

**92160=(2!)<sup>7</sup>6!**

### Input:

A single integer **n** where **1<=n<=2<sup>31</sup>-1**. The input integer is guaranteed to be a valid integer.

### Output:

If **n** is Jordan-Polya, print **1**. Otherwise, print **0**. The newline character does not affect the result.



## 3. Alternating numbers

A number is said *alternating* in base **b** if in its representation odd and even digits alternate.

For example in base 10, **1, 2, 989, 1234543210...** are alternating numbers.

In base 2, **1, 10, 101, 10101...**  are alternating numbers.

### Input:

A single integer **n** where **1<=n<=2<sup>31</sup>-1**. The input integer is guaranteed to be a valid integer.

### Output:

If **n** is alternating, print **1**. Otherwise, print **0**. The newline character does not affect the result.



## 4. Duffinian numbers

So called by Richard Duffy who introduced them. A composite number  which is relatively prime to the sum of their divisors.

For example, **35** is Duffinian since it's relatively prime to the sum of its divisors **1+3+5+7+35=48**.

### Input:

A single integer **n** where **1<=n<=2<sup>31</sup>-1**. The input integer is guaranteed to be a valid integer.

### Output:

If **n** is Duffinian, print **1**. Otherwise, print **0**. The newline character does not affect the result.



## 5. Apocalyptic numbers*

A number of the form **2<sup>n</sup>** is called *Apocalyptic* if its digits contain "666" as a substring. For example, the smallest apocalyptic number is **2<sup>157</sup>**, which is equal to (in decimal) 

182687704<u>**666**</u>362864775460604089535377456991567872​

A number **n** such that **2<sup>n</sup>** is apocalyptic is called *Apocalyptic power* or *Apocalyptic exponent*.

### Input:

A single integer **n** where **157<=n<=50000**. The input integer is guaranteed to be valid.

### Output:

If **2<sup>n</sup>** is apocalyptic, print **1**. Otherwise, print **0**. The newline character does not affect the result.

### Hint:

It's not hard to observe that the numbers we are dealing with exceed the range of `int` or even `long long int` type in C/C++. Therefore, the key point here is to store such a big number using C/C++.



## Reference

[1] Magnanimous numbers http://www.numbersaplenty.com/set/magnanimous_number/

[2] Jordan-Polya numbers http://www.numbersaplenty.com/set/Jordan-Polya_number/

[3] Alternating numbers http://www.numbersaplenty.com/set/alternating_number/

[4] Duffinian numbers http://www.numbersaplenty.com/set/Duffinian_number/

[5] Apocalyptic numbers http://www.numbersaplenty.com/set/apocalyptic_number/