#include <stdio.h>

int main() {
    int num,i,bit,Cleaner = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary: ");
    
    for (i = 31; i >= 0; i--) {
        bit = (num >> i) & 1;
        if(bit == 1)Cleaner = 1;
        if(Cleaner )printf("%d", bit);
    }
    
    return 0;
}
