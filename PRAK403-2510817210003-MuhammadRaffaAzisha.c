#include <stdio.h>

int main() {
    int a, b;
    
    // Membaca input a dan b
    scanf("%d %d", &a, &b);

    if (a < b) {
        // Kasus: a=3, b=7
        // i naik (3, 4, 5, 6, 7)
        // j turun (7, 6, 5, 4, 3)
        int i = a;
        int j = b;
        while (i <= b) {
            // Cetak pasangan
            printf("%d %d", i, j);
            
            // Cek kondisi berhenti
            if (i == b) {
                break;
            }
            
            // Cetak separator
            printf(" - ");
            
            // Update nilai
            i++;
            j--;
        }
    } else { // Kasus a >= b
        // Kasus: a=7, b=3
        // i turun (7, 6, 5, 4, 3)
        // j naik (3, 4, 5, 6, 7)
        int i = a;
        int j = b;
        while (i >= b) {
            // Cetak pasangan
            printf("%d %d", i, j);
            
            // Cek kondisi berhenti
            if (i == b) {
                break;
            }
            
            // Cetak separator
            printf(" - ");
            
            // Update nilai
            i--;
            j++;
        }
    }

    // Cetak baris baru di akhir
    printf("\n");

    return 0;
}