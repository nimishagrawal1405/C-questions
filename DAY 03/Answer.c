#include <stdio.h>

int main() {
float sal;
    scanf("%f", &sal);
    if(0<=sal && sal<=250000){
  printf("0.00");
    }
    else if(250000<sal && sal<=500000){
        printf("%.2f", (sal - 250000) * 0.05 );
    }
    else if(500000<sal && sal<=1000000){
        printf("%.2f", 12500 + ((sal - 500000) * .2));
    }
    else if(1000000<sal){
        printf("%.2f", 112500 + ((sal-1000000) * .3));
    }
    else{
        printf("INVALID");
    }
    return 0;
}