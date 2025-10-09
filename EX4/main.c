#include <stdio.h>

    /*
    a.bin
    寫三個array: a, b, c進去
    讀檔案到aa, bb, cc
    輸出aa, bb, cc
    
    */
    
int main(){
    FILE* fp;
    fp = fopen("a.bin", "w+");
    
    char row[] = "abc";
    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.9, 1.4};
    
    fwrite(a, sizeof(int), 3, fp);
    fwrite(b, sizeof(char), 3, fp);
    fwrite(c, sizeof(float), 3, fp);
    
    rewind(fp);
    
    //define aa, bb, cc
    
    int aa[3];
    char bb[3];
    float cc[3];
    
    fread(aa, sizeof(int), 3, fp);
    fread(bb, sizeof(char), 3, fp);
    fread(cc, sizeof(float), 3, fp);
    
    for(int i=0; i<3; i++){
        printf("%d ", aa[i]);
    }printf("\n");
    
    for(int i=0; i<3; i++){
        printf("%c ", bb[i]);
    }printf("\n");
    
    for(int i=0; i<3; i++){
        printf("%.5f ", cc[i]);
    }printf("\n");
    
    fclose(fp);
    return 0;
    
    
}
