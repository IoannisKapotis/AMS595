Q1(pi_approx.cpp): Wrote a function that approximates pi using the fact that the integral of sqrt(1-x^2) is π/4.
The function takes N, the number of intervals as input from the user, and divies up the interval [0,1]
into N parts. Then evaluates applies the trapezoidal rule to estimate the area. We conclude by multiplying
by 4 to get an estimation for π, and also the absolute error compared to π. 
Since the function is returning two return values, we use a script to hold this info, so the function
can return the script object (1 thing) which holds the values we want (2 things)

Q2(approximations.cpp): Wrote a function called approximations which takes in a vector of integers as input 
(just did a test case vector as opposed to an input for ease of testing). Then, each integer is used as a number
of intervals to split [0,1] into, using the function from question 1. The approximations are stored in a dynamically
allocated array, and returned as such. Important to note is that after we have utilizied this array,
we clear the memory it occupied. 

Q3(HW2MAIN.cpp): For this question we create a source file HW2MAIN.cpp. In this, we call upon the functions from
question 1 and question 2. I created two new files, Q1.cpp and Q2.cpp, which are essentially copies of pi_approx.cpp,
and approximations.cpp, respectively, except they do not contain the test cases and "int main" parts.
Important to note is that, the function from question 1 returned two values using a struct. However, 
for the purposes of Q3, we only need to return an approximation value, so the function in Q1.cpp has been adjusted
accordingly, so no struct was needed.
In this question, we print the approx of π using Q1.cpp, and input vector (10,10^2,...,10^7) in Q2.cpp. Then, we created
a makefile. To do this, we created a Q1.h and Q2.h, which allow us to #include "xxx" and use functions in files they
are not already defined in. With all of this, we create the makefile, and then run "make" in the terminal, yielding
and executable file we call HW2MAIN. 
