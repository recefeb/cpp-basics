#include <iostream>

using namespace std;

int main()
{
    /*
    Dairenin Alanını ve Çevresini Hesaplama
    1-Başla
    2-gerekli variable'ları tanımla (PI ve r)
    3-kullanıcıdan r variable'ı için değer girmesini iste ve bu değeri tara
    4-dairenin alan ve çevresini hesapla (Dairenin alanı= PI*r*r)(Dairenin çevresi= 2*PI*r)
    5-çıktı olarak sonucu kullanıcıya ver
    6-bitir
    */

    const double PI = 3.14159265359;
    float radius;

    cout <<"Please enter a radius value:";
    cin >>radius;

    float area=PI*radius*radius;
    float circumference=2*PI*radius;

    cout <<"Area of the circle="<<area<<"\n";
    cout <<"Circumference of the circle="<<circumference<<"\n";
    return 0;
}