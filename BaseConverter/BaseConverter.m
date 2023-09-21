% Asks the user for n, the starting base
% If n is not within criteria, error is displayed

n = input('Enter an integer n (2 <= n <= 10): ');
    if (n<=10) && (n>=2)
        disp('Value of n has been stored');
    else (n>10) || (n<2);
        disp('Error: n not within given constraints');
        return;
    end 


% Asks the user for x, the number written in base n
% Verifies if x is actually written in base n,
% by checking if each digit is <=n.
% If not, and error is displayed

x = input('Enter number in base-n, x:');
xcheck = num2str(x)-'0'; % Store digits of x in an array
    for z=1:length(xcheck)
        entry = xcheck(1,z); % Looks at a single array entry
        if entry>n % check if x is actually in base n
            disp("Error: x not written in base n")
            return;
        else
        z = z+1;
        end
    end


% Asks the user for m, the desired end base
% If its not within constraints, displays error

m = input('Enter an integer m (2 <= m <= 10): ');
    if (m<=10) && (m>=2)
        disp('Value of m has been stored'); 
    else (m>10) || (m<2);
        disp('Error: m not within given constraints');
        return;
    end


%if n=10, then we will convert straight to m
%if n=/= 10, we will go to base 10 first.
 
% To go from base n to 10, we multiply each digit of x by n^(length(a)-i)
% For ex, if x=123 in base 5, length=3, we want 1*5^2, 2*5^1, 3*5^0
% Then, we sum each of these values to get x in base 10


anew=[]; % Where we are going to store digits of x*n^(length(a)-i)
if (n~=10)
    a = num2str(x)-'0'; % Stores digits of x in array
        for i=1:length(a)
        r = a(1,i); % original digit
        rprime = r*(n^(length(a)-i)); % New digit 
        anew =[anew,rprime]; % Inputs New digits into anew
        end
    xnew = sum(anew); % Calculates x in base 10

    % Now we are in base 10, time to go to base m
    % The process is to divide xnew by m, and extract the quotient
    % and the remainder. Then, we keep doing this process, subbing 
    % the quotient into the role of xnew, until m>quotient

    % Ex: xnew = 123 m = 7. 
    % 123 = 7*17 + 4 --- q=17, r=4
    % 17  = 7*2  + 3 --- q=2,  r=3
    % 2   = 7*0  + 2 --- q=0,  r=2
    % Then, we write the remainders in reverse order: 
    % 234, which is in base m


    quotient = 1; % Sets a value for quotient
    d = []; % Where we are storing remainders in order of calculation
    j=1; % Sets value for j, which iterates spot in d array.
        while (quotient~=0)    
        remainder = rem(xnew,m); % Calculates remainder
        xnew = xnew - remainder; 
        quotient = floor((xnew)/(m)); % Calculates quotient
        xnew = quotient; % Replaces xnew with quotient
        d(1,j) = remainder;
        j = j+1;
        end

    % Remainders need to be written in reverse order, so flip d:
    dprime = flip(d,2); % Flipped array
    M=[]; % Set array
        for k=1:length(dprime)
        NumberAsString = num2str(dprime);
        M=[M,num2str(dprime(1,k))]; % Writes dprime as string entries
        end 
    disp('Your number in base m is:');
    disp(M);
        
        
else % Recall, if statement was n~=10
     % So this is same process, straight from n=10 to m
    dw=[];
    h=1;
    quotientw = 1;
        while(quotientw~=0)
        remainderw = rem(x,m);
        x = x - remainderw;
        quotientw = floor((x)/(m));
        x = quotientw;
        dd(1,h) = remainderw;
        h = h+1;
        end 
    ddw = flip(dd,2);
    N=[];
        for t=1:length(ddw)
        NumberAsString = num2str(ddw);
        N=[N,num2str(ddw(1,t))];
        end 

    EndLine = ['Your number in base ' , num2str(m),  ' is:'];
    disp(EndLine);
    disp(N);

end