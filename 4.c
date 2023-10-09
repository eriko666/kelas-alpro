//fungsi dari gets()
#include <stdio.h>

//Fungsi gets() adalah fungsi untuk mengambil input dalam satu baris. Fugnsi gets() tidak memerlukan format seperti scanf().

int main () {
   char name[50], web_address[50];

   printf("Nama: ");
   gets(name);
   
   printf("Alamat web: ");
   gets(web_address);

   printf("You entered: %s\n", name);
   printf("Web address: %s\n", web_address);

   return(0);
}