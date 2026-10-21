#include <iostream>
#include <locale>

using namespace std;
int main()
{
int a,b,sum_ab;
setlocale(LC_ALL, "Russian");
cout << "¬ведите первое значение: \n";
    cin >> a;
cout << "¬ведите второе значение: \n";
    cin >> b;
    sum_ab = a+b ;
cout << "—умма: " << sum_ab;
return 0;
}
