// cviceni03.cpp : Defines the entry point for the application.
//hgfhgfhtgfhtgfhghghgfhgf

#include "cviceni03.h"

using namespace std;

/*int main()
{
	printf("Zadejte hodnotu v sekundach: ");

	double time;
	int speed = 340.0;
	scanf("%lf", &time);
	printf("Zadany cas: %d", time);
	double distance = speed * time;
	printf("Vase draha je: %lf", distance);
	return 0;
}
*/



unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    double cislo;
    int volba;

    printf("Zadejte cislo: ");
    scanf("%lf", &cislo);

    printf("Vyberte operaci:\n");
    printf("1) Druha mocnina\n");
    printf("2) Druha odmocnina\n");
    printf("3) Zaokrouhlena hodnota\n");
    printf("4) Faktorial ze zaokrouhlene hodnoty\n");
    scanf("%d", &volba);

    switch (volba) {
    case 1:
        printf("Druha mocnina cisla %.2lf je %.2lf\n", cislo, cislo * cislo);
        break;
    case 2:
        if (cislo >= 0)
            printf("Druha odmocnina cisla %.2lf je %.2lf\n", cislo, sqrt(cislo));
        else
            printf("Nelze provest odmocninu z negativniho cisla.\n");
        break;
    case 3:
        printf("Zaokrouhlena hodnota cisla %.2lf je %.0lf\n", cislo, round(cislo));
        break;
    case 4:
        if (cislo >= 0) {
            double zaokrouhlene_cislo = round(cislo);
            printf("Faktorial ze zaokrouhlene hodnoty %.2lf je %llu\n", zaokrouhlene_cislo, factorial((int)zaokrouhlene_cislo));
        }
        else {
            printf("Nelze provest faktorial z negativniho cisla.\n");
        }
        break;
    default:
        printf("Neplatna volba operace.\n");
    }

    return 0;
}
