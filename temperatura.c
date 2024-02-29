
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
