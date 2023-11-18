Q1: Simply translating Matlab code into C++ using switch.

Q2: Created a function "print_vector" that iterates through a vector and prints out each element individually.

Q3: Uses a while loop to generate all terms of the Fibonacci sequence that do not exceed 4,000,000.

Q4a: Created a function "is_prime" that tests if an integer, n, is prime; Does so by checking if any of the values between 2 and n/2
yield 0 as a remainder when divided (modulo operator). If so, then n is not prime. Otherwise, it is. 

Q4b: Created a function "factorize" that generates an array of all factors of an integer n, by simply checking n modulo the possible factor.
Then we use "print_vector" from question 2 to display the results. 

Q4c: Created a function called "prime_factorize" which uses both "factorize" from Q4b and "is_prime" from Q4a. 
First, given integer n, we factorize it using "factorize." Then, we cycle through those factors and select only
those which are prime, using "is_prime." Then we use "print_vector" to display the results. 

Q5: Created a function that recursively generates the nth row of pascals triangle, and displays all rows up to n. Note,
that the "top" of pascals triangle, which is {1}, is row 0. Row 1 is {1,1}, and so on. We display this using "print_vector."
Note the procedure is analogous to what we did in Python, however we need to alter to print all rows before n as well. 
