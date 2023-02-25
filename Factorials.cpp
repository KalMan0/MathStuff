#include <iostream>
#include <cmath> 

double sin_approx(double,int); 
double ang_to_rad_conv(double); 
double non_recursive_factorial (double); 
double recursive_factorial (double); 

int main (int argc, char* argv[])
{
    // use any of the functions here if you like
}

//Non recursive facotorial uses a for loop for computation 

double non_recursive_factorial (double n)
{
    for(int i = n; i > 1;  i--)
    {
        n *= (i - 1); 
    } 
    return n; 
}
//recursive facotorial uses recursion for computation 

double recursive_factorial (double n)
{
    if (n == 0 || n == 1)
    return 1; 
    else
    return n*= recursive_factorial(n-1); 
}

// uses of the factorial ex.) 
/*
Taylor approx formula:  

sum: sin(x) =  (-1)n * (x^2n+1) / (2n+1)! (the denominator will be using the factorial function)

== (x) - (x^3)/(3!) + (x^5)/(5!) - (x^7)/(7!) + (x^9)/(9!) ... 
    
*/

double ang_to_rad_conv(double deg)
{
    return deg/ 180 * 3.141592653589; 
}

double sin_approx(double x, int n)      
{
    x = ang_to_rad_conv(x); 
    double sum; 
    for(int i = 0; i < n; i++)
    {
        double num = pow(-1, i) * pow(x, 2 * i + 1);  
        double denom = non_recursive_factorial(2 * i + 1);        // use any of the factorial functions       
        sum = sum + num / denom;                     
    }
    return sum;
}

