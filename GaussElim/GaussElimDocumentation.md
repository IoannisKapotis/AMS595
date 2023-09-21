Gaussian Elimination is a method employed to simplify a matrix to upper triangular form, in order to extract information.
In this case, we are given an nxn matrix A, and a 1xn vector b, and asked to find vector x, such that:
Ax=b

We can do this using gaussian elimination. Take our matrix A, and concatenate it with matrix b.
This creates an augmented matrix Ab, of dimension n+1 by n. Then, we use gaussian elimination to make this matrix upper triangular.
From this, we can treat each row as a system of linear equations, retrieving the values for vector x, which satisfy Ax=b.

The code employs this method in the following way. Ask the user for nxn A, and 1xn b.
Concatenate to form augmented matrix Ab.
Do row reduction; i.e., divide a row of Ab by the value of the entry you are trying to make 0.
Then, multiply that same row by the respective pivot entry ( (1,1), (2,2), etc).
Now, subtract the row contatining the pivot entry from the row you are operating on.
This yields a 0 in the desired spot, and alters the rest of the row uniformly.
This process continues down the column, and through the rows, until we get an upper triangular matrix.
The last two columns can all be nonzero, as we can solve this system of equations with this information.
Now, starting from the 'bottom' of the matrix, we solve for the last value of our vector x, first,
by looking at the row [0,0,0,...,Ab(n,n),Ab(n,n+10]. This is the same as saying Ab(n,n)x_n=Ab(n,n+1).
I.e., x_n= Ab(n,n)/Ab(n,n+1). 
We continue this iteratively, with a somewhat more complex function to cover every x_i's computation. 
At the end, we have our desired vector x, such that Ax=b.

