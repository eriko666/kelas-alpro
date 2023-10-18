//fungsi dari  scanf()
#include <stdio.h>

int main () {
    // membuat variabel
    char name[20], web_address[30];

    printf("Nama: ");
    scanf("%s", &name);

    printf("Alamat web: ");
    scanf("%s", &web_address);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Web yang diinputkan: %s\n", web_address);

//Simbol & berfungsi untuk mengambil alamat memori dari sebuah variabel.
//Fungsi scanf() membutuhkan tempat untuk menyimpan nilai yang akan diinputkan.
//Karena itu kita memberikan simbol & di depan nama variabel untuk menentukan alamat memori yang akan digunakan oleh scanf().



   
    return 0;
}