#include <iostream>
#include <locale>

using namespace std;
int main()
{
int a,b,sum_ab,ab;
setlocale(LC_ALL, "Russian");
cout << "Введите первое значение: \n";
    cin >> a;
cout << "Введите второе значение: \n";
    cin >> b;
    sum_ab = a+b ;
cout << "Сумма: " << sum_ab <<"\n";
    ab= a*b;
cout << "Произведение: " << ab;
return 0;
}
