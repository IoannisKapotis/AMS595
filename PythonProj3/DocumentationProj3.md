Question 1: Good coding practice

Question 2a: Here we are to implement the trapezoid rule scheme to approximate the integral of a function with given bounds.
First, we evaluated the indefinite and definite integral using SymPy.
Next, we built a code that implements said trapezoid approximation. To do this, essentially, the code takes a "step size" value 
of N, and divys up the domain into equally sized intervals. Then, the function is evaluated at each of the endpoints of these intervals.
Then, we evaluate the area of each of the trapezoids formed by this data, and add them up (and multiply/divide by necessary constants) to
get an approximation of the area under the curve, f. We then compare these values to the value given by SymPy, and plot them vs N

Question 3: We use Pandas to create some desired dataframe, regarding Long Island towns and their "populations" in some three specific
years. Then we add another column for another Long Island town, and create its 'populations' as a sum of two of the other town's populations.

Question 4: We use Pandas to read a csv file, and alphabteize based off of last name of customers, and then extract how many customers
have a subscription date within some desired range. 

Question 5: I found this to be the most intensive problem. In this problem, we take a square matrix A, and find its LU decomposition.
The LU decomposition is two matrices, L and U, such that the product (matrix product) equals A. In essence, we take A, do gaussian elimination 
to produce an upper triangular matrix, U. In doing this gaussian elimination, we multiply a row by a certain factor, in order to get 0 in desired places.
This factor is the exact value we need for the L matrix, so we plug it into the corresponding spot where we got 0 in the U matrix. 
Then, once L and U are found, we compute the differences from the LU values to the original A, and see if they match within some certain
degree. The reason they differ to some extent is due to precision errors within the code itself. 

Question 6: We take some random 5x5 matrix P, and normalize each row so that the sum of its values is equal to 1, for each row. 
Then, we create a vector p of length 5, and do the same to its values so that the sum is 1. We then preform the transition rule 50 times,
which is finding the vector yielded from the product of P transpose and p, p50. Then, we use numpy to find the eigenvalues and eigenvectors of P transpose,
and extract the eigenvector corresponding to eigenvalue 1. We then normalize this vector as before, and compare its values componentwise to
p50, and check if they are close enough within a certain interval. I found that they are not close enough within that interval!


