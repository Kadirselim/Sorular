#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonksiyon prototipi
int randomDice();

int main() {
    double dizi[6];
    dizi[1] = 1.0/6.0;
    dizi[2] = 1.0/5.0;
    dizi[3] = 1.0/4.0;
    dizi[4] = 1.0/3.0;
    dizi[5] = 1.0/2.0;
    dizi[6] = 1;

    int deger = randomDice();
    printf("Merminin bulundugu yer : %d \n", deger);

        if (deger == 1) {                 
		   printf("1.nin ihtimali:%lf ", dizi[1]);
            printf("Birinci oyuncu kaybetti");
        } else if (deger == 2) {		
			printf("2.nin ihtimali:%lf ", dizi[2]);
            printf("Ikinci oyuncu kaybetti");
        }
		 else if (deger == 3) {
        	printf("3.nin ihtimali: %lf ", dizi[3]);
            printf("Ucuncu oyuncu kaybetti");
        } else if (deger == 4) {
        	printf("4.nin ihtimali: %lf ", dizi[4]);
            printf("Dorduncu oyuncu kaybetti");
        } else if (deger == 5) {
        	printf("5.nin ihtimali: %lf ", dizi[5]);
            printf("Besinci oyuncu kaybetti");
        } else {
        	printf("6.nin ihtimali: %lf ", dizi[6]);
            printf("Altinci oyuncu kaybetti");
        }
        return 0;
}

int randomDice() {
    srand(time(NULL));
    return rand() % 6 + 1;
}