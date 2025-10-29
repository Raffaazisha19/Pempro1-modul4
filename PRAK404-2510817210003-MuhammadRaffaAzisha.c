#include <stdio.h>

int main() {
    int pilihan;
    float nilai1, nilai2, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Raffa Azisha\n");
            break; 
            
        } else if (pilihan == 1) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai2);
            hasil = nilai1 + nilai2;
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            
        } else if (pilihan == 2) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai2);
            hasil = nilai1 - nilai2;
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            
        } else if (pilihan == 3) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai2);
            hasil = nilai1 * nilai2;
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            
        } else if (pilihan == 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai2);
            hasil = nilai1 / nilai2;
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            
        } else {
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
    }

    return 0;
}