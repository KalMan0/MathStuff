#include <iostream> 
#include <cmath> 


void piapprox (float&, long int);

int main(int argc, char* argv[])
{
    float pi = 1; 
    long int iter = 90000000; 
    // honestly just define pi at this point LMAO 

    piapprox(pi,iter); 

    std::cout<<pi<<std::endl; 

}

void piapprox (float &pi, long int iter)
{
    for(int i = 0; i < iter; i++){
        float denom = i * 2 + 3; 
        float fract = 1 / denom; 
        if(i % 2 == 0){
            pi -= (1/denom); 
        }else{
            pi += (1/denom); 
        }
    }
    pi *= 4; 
}