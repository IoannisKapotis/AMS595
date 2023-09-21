Montepi.m is a function made in MatLab which employs the monte carlo method for approximating the value of π.
This method is as follows: In a unit square, [0,1]x[0,1], plot n random points.
Analyze every point, and determine whether it is within, or outside, the unit circle, crossing through [0,1]x[0,1].
i.e., for t=(x,y), check if sqrt(x^2+y^2)>1. If it is, the point is outside the unit circle. Otherwise, it is in.

The area of the region within the unit circle, in [0,1]x[0,1], is π/4.
If we take the # of points within the circle, and divide it by n, the total number of points, we get an approximation for π/4.
Thus, multiplying by 4, we get an approximation of π.

The code for this works in a very intuitive way:
Plot n random points, determine if they are in or out, and get an estimation using the method outlined above.
Along with this, the function also outputs some relevant data:
The absolute error, the relative error, the array of x-coordinates generated, and the array of y-coordinates generated.
