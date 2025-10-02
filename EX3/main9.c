#include <stdio.h>

int main(){
    
    int x = 2;
    int y = 4;
    int z = 9;
    int n;
    if(x<0){
        n = 100*x - 10*y -z;
    }
    else{
        n = 100*x + 10*y +z;
    }
    printf("%d",n);
    return 0;
}
