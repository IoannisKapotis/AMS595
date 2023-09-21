
function [x] = GaussElim()

%Ask user for nxn matrix, A
A = input('Please enter matrix nxn matrix A with real entries:');
[Rows, Columns] = size(A);

if Rows ~= Columns %verify its square
    disp('Error: Not a square matrix')
    return;
end

%Ask user for vector b
b = input('Please enter 1xn vector b:');
[Rows2, Columns2] = size(b);

if Rows2 ~= Rows || Columns2 ~= 1 %verify its 1xn
    disp('Error: Not a 1xn vector')
    return;
end

%We reach this point if A and b fit the criteria
%Now, we want to make augmented matrix

Ab=[A,b]; %Glue on b to A
l = length(Ab);

% Now the actual upper triangulation part:
% We want to turn the 'A' part of Ab into upper triangular 
% In the first for loop, we want the last column of A to be left alone
% so stop at l-2.

% In the second for loop, the (1,1) spot is untouched, so start at j+1
% We want to only work in 'A', so stop at l-1

% The if statement checks if the value is already 0. If it is, we
% can skip that iteration. If not, we need to do our row opertation.
% This is essentially dividing the entire row by the value you are 
% trying to make zero, multiplying the row by a value, and then 
% subtracting the two rows, giving 0 in the desired spot.

% Example on small scale:
% If M=[1,2;3,4], we would divide row2 by M(1,2)=3 [1,2;1,4/3], 
% then multiply row2 by M(1,1)=1, [1,2;1,4/3], and then subtract
% row1 from row2, [1,2;0,2-4/3]=[1,2;0,2/3]

for j= 1:l-2 
    for i=j+1:l-1 
        if Ab(i,j)~=0 %if the value is 0 already, we can skip over it!
           mult= Ab(i,j);
           for h=j:l
               Ab(i,h) = (Ab(i,h)/mult)*Ab(j,j)-Ab(j,h);
           end
        end        
    end
end

%Now we want to extract the desired x vector such that Ax=b
x=zeros(1,l-1);
%This is just taking the upper triangular matrix, and writing a system of
%equations with the matrix entries, and solving for each x iteratively
    for k=l-1:-1:1
        m = Ab(k,k:l-1).*x(1,k:l-1);
        sum(m)
        x(1,k)=(Ab(k,l)-sum(m))/Ab(k,k);
    end
end