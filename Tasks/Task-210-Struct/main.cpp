#include "mbed.h"

// Date for ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;


int main() {
    //used for output 
    double abs;
    //Create complext number 
    ComplexNumber_C p;

    //real and imaginary compotnents  
    p.real = 2.0;
    p.imag = 3.0;
    
    //Create absolute value 
    abs = sqrt((p.real)*(p.real)+(p.imag)*(p.imag));
    //arbitrery binary input 
    int binarynumber = 0b10010;
 
    
        //output for the absolute value
        printf("\nabsolute value = %f",abs);
        //binary number to compare
        printf("\nbinary number = 0b10010 ");
        //hex output
        printf("\nhex nunmber = %x",binarynumber);

    
}
