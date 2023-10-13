#include <stdio.h>

int main() {
    float berat, tinggi, bmi;

    printf("Masukkan berat (kg): ");
    scanf("%f", &berat);
    printf("Masukkan tinggi (cm): ");
    scanf("%f", &tinggi);

    tinggi = tinggi / 100;

    bmi = berat / (tinggi * tinggi);

    printf("BMI Anda adalah: %.1f\n", bmi);
// jika berat badan lebih dari 17 dan kurang dari 23 = cetak badan ideal
     if (bmi >= 17 && bmi < 23) {
        printf("Cetak Badan Ideal\n");
// jika berat badan lebih dari 18 dan kurang dari 25 = cetak badan ideal

    } else if (bmi >= 18 && bmi < 25) {
        printf("Cetak Badan Ideal\n");
// jika tidak ada berat dari kedua diatas = cetak badan tidak ideal
    } else {
        printf("Cetak Badan Tidak Ideal\n");
    }
    return 0;
}

