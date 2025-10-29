#include <stdio.h>

int main() {
    int a, kelipatan;
    scanf("%d %d", &a, &kelipatan);
    int total = 0;

    for (int i = 1; i <= a; i++) {
        int hasil = 0;
        
        for (int j = i; j >= 1; j--) {
            int term = j * kelipatan;
            hasil += term;
            
            printf("(%d * %d)", j, kelipatan);
            
            if (j > 1) {
                printf(" + ");
            }
        }
        
        printf(" = %d\n", hasil);
        
        total += hasil;
    }

    printf("%d\n", total);

    return 0;
}