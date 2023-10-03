I feel there is not much of a description for the majority of the problems, but I will give a brief overview. 

Problem 2, to calculate the factorial of n, all we do is iteratively compute the n-1, n-2, ... factors, store them in a list, and then take the product of them all. 

Problem 3, we are checking if a given number n is prime. To do so, we look at the remainder of n modulo 2, then 3, then 4, etc, up until half of n, as nothing bigger can be a divisor. If the remainder is 0 for any of those values, then n is not prime. Otherwise, it is.

problem 4, we create a list of all possible divisors, then use the function from problem 3 combined with checking if it is a divisor to curate the prime divisors.

Problem 5, we generate the nth row of Pascal's triangle in two different ways. One is using recursion, so we essentially start from n=1 and build upwards each row depending on what n we want. The second way is without actually calling the function in the function, and just building each row using while and for loops.

