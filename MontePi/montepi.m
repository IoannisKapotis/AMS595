function [approxpi, abserr, relerr, X, Y] = montepi(n)

% This function plots n random points in [0,1]x[0,1], a square.
% It designates which points are within/outside the quarter of the
% unit circle that runs through said square. Then, we get an approximation
% of pi, which is [4*(# of in points)]/[# of points in total, n]. It then
% outputs the approximation of pi, the absolute error, and relative error
% with respect to the actual value of pi. 


% Begins by designating the # of in and out points to 0, since nothing
% is plotted yet. Also designates arrays to store x and y coordinates of 
% each point.

in = 0; 
out = 0; 
X=[];
Y=[];

for i=1:n
    t = rand(1,2); % Makes random point, t:(defualt range is [0,1]x[0,1])
    x = t(1,1); % Stores x coordinate
    y = t(1,2); % Stores y coordinate
    d = sqrt(x^2+y^2); % Distance of t from 0
    X(1,i)=x; % Puts x into the X coordinate array
    Y(1,i)=y; % Puts y into the Y coordinate array

    % Designate each point as in or out:
        if d <=1
            in = in + 1;
        else 
            out = out + 1;

        end
        i = i + 1;
end
approxpi = (4*in)/(n); % Approximiation of pi
abserr = abs(pi-approxpi); % Absolute error 
relerr = abserr/pi; % Relative error
end
