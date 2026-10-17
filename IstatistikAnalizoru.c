#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
int i,j;
double dizi[5];
double ort,toplam;
double sayi;
printf("=== ISTATISTIK ANALIZORU ===\n\n");

while(1)
{
    for(i=0;i<5;i++)
    {
            printf("\n%d. sayiyi giriniz: ",i+1);
            scanf("%lf",&dizi[i]);
    }
 break;
}
toplam=0;
for(j=0;j<5;j++)
{
    toplam=dizi[j]+toplam;
}
ort=toplam/5;
printf("\n\n--- SONUCLAR ---\n");
printf("Dizinin ortlamasi: %.2lf\n",ort);

printf("İlk Elemanin Karekoku: %.2lf\n",sqrt(dizi[0]));
printf("Son Elemanin Karekoku: %.2lf\n",sqrt(dizi[4]));

printf("\n--- YUVARLAMA SONUÇLARI ---\n");
printf("Ortalamaniz (Ceil - Tavan): %.2lf\n",ceil(ort));
printf("Ortalamaniz (Floor - Taban): %.2lf\n",floor(ort));
printf("Ortalamaniz (Round - Standart): %.2lf\n",round(ort));

return 0;
}
