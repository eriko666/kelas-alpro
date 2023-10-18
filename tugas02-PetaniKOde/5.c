//fungsi dari fgets
#include <stdio.h>

int main(){
    char name[50], email[50];
    
    printf("Nama: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Email: ");
    fgets(email, sizeof(email), stdin);
   
    printf("\n-------------------------\n");
    printf("Nama anda: %s", name);
    printf("Alamat email: %s", email);
    
// kita menggunakan fungsi sizeof() untuk mengambil ukuran buffer dari variabel. Ukuran ini akan menjadi batas maksimum dari inputan.

    return 0;
}