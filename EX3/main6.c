#include <stdio.h>

int main(){
    
    int i=70; // input time
    
    if(i <= 30){ // free
        printf("免費");
    }
    else if(i >=240){ // 上限240元=240min
        printf("240元");
    }
    else{
        if(i%30 ==0){
            printf("%d元", 30*(i/30));
        }
        else{
            printf("%d元", 30*(i/30+1));
            
        }
        
    }
    return 0;
}
