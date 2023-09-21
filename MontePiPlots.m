% Set arrays used for storing time elapsed (t), number of points (n),
% absolute error (p), and relative error (q).

T = [];
N = [];
P = [];
Q = [];

% Suppose n=2000; Cycle through storing information iteratively
for n=1:2000
tic;
[approxpi, abserr, relerr, X, Y] = montepi(n); %Calls the function
t = toc;
p = abserr;
q = relerr;
T(1,n) = t;
N(1,n) = n;
P(1,n) = p;
Q(1,n) = q;

end

%Set arrays to keep track of which points are in the circle, and which are
%outside of it

XIN=[];
YIN=[];
XOUT=[];
YOUT=[];
j=1;
k=1;
for i=1:n
    if sqrt(X(1,i).^2+Y(1,i).^2) <=1 % Check if within circle; store as in
        XIN(1,j)=X(1,i); 
        YIN(1,j)=Y(1,i);
        j=j+1;
    else % if its not inside, its outside; store as out
        XOUT(1,k)=X(1,i);
        YOUT(1,k)=Y(1,i);
        k=k+1;
    end
end

%First figure plots # of points vs. Execution time
figure(1); 
plot(N,T);
title('# of Points vs. Execution Time')

% Second figure plots # of points vs. Absolute error
figure(2); 
plot(N,P);
title('# of Points vs. Absolute Error')

% We need the part of the unit circle in the 1st quadrant for third figure:
x=0:.01:1;
P=sqrt(1-x.^2);

% Third figure plots all the points; blue if they are in, red if out.
% It also plots the part of the unit circle from before.

figure(3);
scatter(XIN,YIN,'filled','blue');

hold on %Allows us to 'stack' the scatter and plot
scatter(XOUT,YOUT,'filled','red');


plot(x,P,'LineWidth',5,'Color','black');
title('Plotting of Points with Circle; π ~', approxpi)

hold off






