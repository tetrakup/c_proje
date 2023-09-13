#include <stdio.h>

void print_duration(int ay) {
    int yil = (ay - 1) / 12 + 1;// Ay ve yılın değerlerini hesaplar
    int kalan_ay = (ay - 1) % 12 + 1;// Ay ve yılın değerlerini hesaplar
    printf("-> yil:%d, ay:%d\n", yil, kalan_ay); // Ay ve yılın değerlerini yazdırır.
}

void print_money(float para) {
    printf("%.1f TL\n", para); // Para miktarını yazdırır.
}

void print_entry(float kredi_tutari, float faiz_orani, int ay) {
    printf("Toplam odeme:\n");
    float toplam_faiz = (kredi_tutari / 100) * (faiz_orani / 12) * ay;
    print_money(kredi_tutari + toplam_faiz); // Toplam ödemeyi yazdırır.
    printf("Aylik odeme:\n");
    float aylik_odeme = (kredi_tutari + toplam_faiz) / ay;
    print_money(aylik_odeme); // Aylık ödemeyi yazdırır.
}

void print_full_report(float kredi_tutari, float faiz_orani, int maks_yil, int maks_ay, int yineleme) {
    int yil, ay;
    for (yil = 1; yil <= maks_yil; yil++) {
        for (ay = 1; ay <= maks_ay; ay += yineleme) {
            printf("-> yil:%d, ay:%d\n", yil, ay); // Yıl ve ayın değerlerini yazdırır.
            print_entry(kredi_tutari, faiz_orani, (yil - 1) * 12 + ay);
        }
    }
}

int main() {
    char ad[100];
    float kredi_tutari, faiz_orani;
    int maks_yil, maks_ay, yineleme;

    printf(".............................................\n");
    printf(".*.*.*.Faiz Hesaplayiciya Hos Geldiniz.*.*.*.\n");
    printf(".............................................\n");
    printf("Lutfen adinizi girin: ");
    scanf("%s", ad);
    printf(".............................................\n");
    printf("Kredi tutari: ");
    scanf("%f", &kredi_tutari);
    printf("-> TIME LENGTH ");
    printf("Yillik faiz orani:");
    scanf("%f", &faiz_orani);

    printf("Kredi suresi yil olarak: ");
    scanf("%d", &maks_yil);

    printf("Kredi suresi ay olarak: ");
    scanf("%d", &maks_ay);

    printf("Yineleme araligi ay olarak:");
    scanf("%d", &yineleme);
    printf(".............................................\n");
    printf(".............................................\n");
    printf("%s icin rapor:\n", ad);
    print_full_report(kredi_tutari, faiz_orani, maks_yil, maks_ay, yineleme);

    return 0;
}