Base conversion is taking a value written in base n, and writing that value in base m.

The procedure I am considering here is one that uses base 10 as a middleman.
I.e., for a number given in base n, if it is not in base 10 already, bring it there first, and then go to base m.

The code I created does this in the following way:

Ask the user for the number, x, written in base n, and the desired base m.
If n is not 10, we must first go from base n to base 10. The process of this is outlined with an example, commented in the code.
I will briefly mention the process here as well. We take the number x, and split its digits into an array.
We then multiply each digit by the base n, raised to the power: l-i, where l is the number of digits in x, and i increases for each iteration, until l.
We then sum these new values, and that number, call it xnew, is our x represented in base 10.

Now that we are in base 10, to go from base 10 to base m is as follows:
Divide xnew by m, and observe the quotient and remainder. Then, divide the quotient by m, and observe the same values.
Keep doing this process until m is larger than the numerator. 
This results in some amount of remainders, r1,r1,..rn. r1 being the first remainder we calculated, and rn being the last.
Taking these remainders, we order them in the reverse order that we collected them. i.e., rn,rn-1,...,r1.
Reading these ri's next to eachother as digits of one number, we get our xnew represented in base m.
