# Lab One: Integers!

## Description

### 1. Magnanimous number

  - **Definition:**
  
  A number with at least 2 digits such that the sum obtained inserting a "+" among its digit in any position gives a prime.

  For example, 1316 is *magnanimous* because the numbers

    - 1 + 316 = 317
	
    - 13 + 16 = 29
	
    - 131 + 6 = 137

  are all prime numbers.

  - **Input:**

  An integer **n** where **1 <= n <= 10<sup>7</sup>**.

  - **Output:**

  Whether **n** is a magnanimous number.


### 2. Jordan-Polya number

  - **Definition:**
  
  A number that can be written as the product of factorial numbers.

  For example, **92160** is *Jordan-Polya* because 

  **92160 = (2!)<sup>7</sup> &times; 6!**

  - **Input:**

  An integer **n** where **1 <= n <= 10<sup>7</sup>**.

  - **Output:**

  Whether **n** is a Jordan-Polya number.


### 3. Alternating number

  - **Definition:**
  
  A number is said *alternating* in base **b** if in its representation odd and even digits alternate.

  For example in base 10, **1**, **2**, **989**, **1234543210** are alternating numbers.

  In base 2, **1**, **10**, **101**, **10101**  are alternating numbers.

  - **Input:**

  An integer **n** where **1 <= n <= 10<sup>7</sup>**, and base **b**.

  - **Output:**

  Whether **n** is an alternating number in base **b**.


### 4. Duffinian number

  - **Definition:**
  
  A composite number which is relatively prime to the sum of its divisors. So called by Richard Duffy who introduced it.

  For example, **35** is Duffinian since it's relatively prime to the sum of its divisors **1 + 3 + 5 + 7 + 35 = 48**.

  - **Input:**

  An integer **n** where **1 <= n <= 10<sup>7</sup>**.

  - **Output:**

  Whether **n** is a Duffinian number.
  

### 5. Apocalyptic number*

  - **Definition:**
  
  A number of the form **2<sup>n</sup>** is called *Apocalyptic* if its digits contain "666" as a substring. For example, the smallest apocalyptic number is **2<sup>157</sup>**, which is equal to 

  182687704<u>**666**</u>362864775460604089535377456991567872​

  A number **n** such that **2<sup>n</sup>** is apocalyptic is called *Apocalyptic power* or *Apocalyptic exponent*.

  - **Input:**

  An integer **n** where **1 <= n <= 50000**.

  - **Output:**

  Whether **2<sup>n</sup>** is an Apocalyptic number.


  - **Hint:**

  It's not hard to observe that the numbers we are dealing with exceed the range of `int` or even `long long int` type in C/C++. Therefore, the key point here is to store such a big number using C/C++.



## Reference

[1] Magnanimous numbers http://www.numbersaplenty.com/set/magnanimous_number/

[2] Jordan-Polya numbers http://www.numbersaplenty.com/set/Jordan-Polya_number/

[3] Alternating numbers http://www.numbersaplenty.com/set/alternating_number/

[4] Duffinian numbers http://www.numbersaplenty.com/set/Duffinian_number/

[5] Apocalyptic numbers http://www.numbersaplenty.com/set/apocalyptic_number/