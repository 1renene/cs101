#include <stdio.h>

int main()
{
    for(int i=1; i<7; i++){
        int spc=6-i;
        while(spc>0){
            printf(" ");
            spc--;
        }
        for(int j=i; j>0; j--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
