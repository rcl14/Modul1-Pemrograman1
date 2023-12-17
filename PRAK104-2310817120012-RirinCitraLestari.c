#include <stdio.h>

int main() {
    int harga_sepatu_a = 400000;
    int harga_sepatu_b = 350000;
    int diskon_sepatu_a = 13;
    int harga_diskon_a = harga_sepatu_a - (harga_sepatu_a * diskon_sepatu_a / 100);
    int diskon_sepatu_b = 21;
    int harga_diskon_b = harga_sepatu_b - (harga_sepatu_b * diskon_sepatu_b / 100);

    printf("Harga sepatu a adalah %d\n", harga_sepatu_a);
    printf("Harga sepatu b adalah %d\n", harga_sepatu_b);
    printf("Sepatu a mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon_sepatu_a, harga_diskon_a);
    printf("Sepatu b mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon_sepatu_b, harga_diskon_b);

    return 0;
}
