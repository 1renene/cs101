#include <stdio.h>

int main(){
    
    int i = 1999; // <1500, 70; >1500, $10/100m
    if(i<=1500){
        printf("70元");
    }
    else{
        int j = i-1500; //499
        if(j%100 == 0){ //f
            j = 10*(j/100);
        }else{
            j = 10*(j/100+1); //j=10*
        }
        printf("%d元",70+j);
    }
    return 0;
}
