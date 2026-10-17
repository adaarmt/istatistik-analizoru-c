# İstatistik ve Yuvarlama Analizörü (C Language)
Bu proje, C dilinde diziler, döngüler ve `math.h` kütüphanesi fonksiyonlarını pekiştirmek için hazırlanmış bir konsol uygulamasıdır.

Proje Amacı ve Özellikleri:
Kullanıcıdan 5 adet ondalıklı sayı (`double`) alarak aşağıdaki işlemleri gerçekleştirir:

1. Aritmetik ortalama hesabı
2. İlk ve son elemanların karekök hesabı (`sqrt`)
3. `math.h` yuvarlama fonksiyonlarının kullanımı:
    `ceil`: Yukarı yuvarlama (Tavan)
    `floor`: Aşağı yuvarlama (Taban)
    `round`: Standart yakına yuvarlama

## Derleme ve Çalıştırma
GCC derleyicisi ile derlemek için:

```bash
gcc istatistik.c -o istatistik -lm
./istatistik
