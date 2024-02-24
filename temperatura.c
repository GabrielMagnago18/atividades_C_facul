/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float tf, tc;
    
    printf("Fahrenheit\tCelcius\n");
    
    for (tf = 50; tf <= 65; tf ++){
        tc = (tf-32)*(5.0/9.0);
        printf("%.2f\t\t%.2f\n", tf, tc);
    }
    
}
