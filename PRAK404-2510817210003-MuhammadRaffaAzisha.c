#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);

    if (a < b) {
        int i = a;
        int j = b;
        while (i <= b) {
            
            printf("%d %d", i, j);
            
            if (i == b) {
                break;
            }
            
            printf(" - ");
            i++;
            j--;
        }
    } else { 
        int i = a;
        int j = b;
        while (i >= b) {
            printf("%d %d", i, j);
            
            if (i == b) {
                break;
            }

            printf(" - ");
            i--;
            j++;
        }
    }

    printf("\n");

    return 0;
}
