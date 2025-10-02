#include <stdio.h>

int main(){
    
    int i=200; //input year
    if((i%4 == 0 && i%100 != 0)||(i%400 == 0)){
        printf("閏年");
    }
    else{
        printf("不是閏年");
    }
    return 0;
}
