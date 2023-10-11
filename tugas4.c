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
// jika berat badan lebih dari 40 dan kurang dari 50 = obesitas
     if (bmi >= 40 && bmi < 50) {
        printf("Kategori BMI Anda adalah: Obesitas\n");
// jika berat badan lebih dari 25 dan kurang dari 39 = normal

    } else if (bmi >= 25 && bmi < 39) {
        printf("Kategori BMI Anda adalah: Normal\n");
// jika tidak ada berat dari kedua diatas = kurus
    } else {
        printf("Kategori BMI Anda adalah: Kurus\n");
    }
    return 0;
}
