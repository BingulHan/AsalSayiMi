// AsalMiDegilMi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int x;
    bool result = true;

    std::cout << "Merhaba sorgulamak istediginiz sayiyi yaziniz!\n";

    std::cin >> x; // Kullanýcýdan konsol yolu ile girdi istemek için kullanýlýr bir arayüzdende bilgi alýnabilir.


    for (int i = 1;i < x;i++) {  //Alýnan girdinin asal olup olmadýðý kontrol edilir.
        if (i != 1) {
            if (x % i == 0) {
                result = false;
            }
        }

    }


    //Kontrol durumuna göre uygulamaya dönüt gönderilir.
    if (result==true) {
        std::cout << "Bu sayi asal bir sayýdýr";
    }
    else {
        std::cout << "Bu sayi asal degildir.";
    }

    return 0;

}
