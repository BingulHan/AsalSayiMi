// AsalMiDegilMi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int x;
    bool result = true;

    std::cout << "Merhaba sorgulamak istediginiz sayiyi yaziniz!\n";

    std::cin >> x; // Kullan�c�dan konsol yolu ile girdi istemek i�in kullan�l�r bir aray�zdende bilgi al�nabilir.


    for (int i = 1;i < x;i++) {  //Al�nan girdinin asal olup olmad��� kontrol edilir.
        if (i != 1) {
            if (x % i == 0) {
                result = false;
            }
        }

    }


    //Kontrol durumuna g�re uygulamaya d�n�t g�nderilir.
    if (result==true) {
        std::cout << "Bu sayi asal bir say�d�r";
    }
    else {
        std::cout << "Bu sayi asal degildir.";
    }

    return 0;

}
