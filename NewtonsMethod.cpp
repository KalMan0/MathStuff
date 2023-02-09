#include <iostream> 
#include <cmath>

float newtons_Method(float); 
float deriv(float); 
float functionx(float); 


int main (int argc, char* argv[]) 
{
    float guessVal; 
    std::cout<<"Enter a guess: "; 
    std::cin >> guessVal; 

    float res = newtons_Method(guessVal); 

    std::cout<<"Output: "<<res<<std::endl; 
}

/*
Enter your equation in the function below
ex.) x^2 = x *x 

*/

float functionx (float x) 
{
    return sin(x) ; 
}


float deriv(float z)
{
    return (functionx(z+0.00001) - functionx(z)) / 0.000001; 
}

float newtons_Method(float guessval)
{
    float x = guessval; 
    float z = functionx(x) / deriv(x); 
    while (fabs(z) >= 0.0001) 
    {
        x = x - z; 
        z = functionx(x) / deriv(x); 
    }

    return x; 
}