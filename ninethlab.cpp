#include "tears.h"

int main() 
{
    string a, b;
    setlocale(0, "");
    cout << "������� ����� ��������: " << endl;
    getline(cin, a);   //
    cout << "������� ������ ��������: " << endl;
    getline(cin, b);   //
    cout << "���������� ����� ��� ���������, ������� ������������� �� "<<b<<" :"<< endl;
    newryadok(a, b);
    system("pause");
    return 0;
}
