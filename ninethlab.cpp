#include "tears.h"

int main() 
{
    string a, b;
    setlocale(0, "");
    cout << "Введите рядок символов: " << endl;
    getline(cin, a);   //
    cout << "Введите группу символов: " << endl;
    getline(cin, b);   //
    cout << "Полученный рядок без элементов, которые заканчиваются на "<<b<<" :"<< endl;
    newryadok(a, b);
    system("pause");
    return 0;
}
