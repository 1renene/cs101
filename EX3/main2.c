#include <stdio.h>

int main()
{
    int i=3; //i=3, false; i=8, true
    if(i & (i-1)){
        printf("false");
    }else{
        printf("true");
    }
    return 0;
}
