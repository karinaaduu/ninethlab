#include "tears.h"

void newryadok(string a, string b) {
    int slova = 1;
    for (int i = 0; i <= a.find_last_of(" "); i++) {         //������� ���� (�� �������)
        if (a[i] == ' ') {
            slova++;
        }
    }
    string* words = new string[slova];
    int wrd = 0;
    for (int i = 0; i < a.length(); i++) {                  //����������� �������� � �����
        if (a[i] != ' ') {
            words[wrd] += a[i];
        }
        else {
            wrd++;
        }
    }
    int count = 0;                                      //����� ���������, ������� �������� �� �������
    for (int i = 0; i < (slova); i++) {
        bool same = true;
        for (int k = 0; k < b.length(); k++) {
            if (words[i][words[i].length() - (b.length() - k)] != b[k]) {
                same = false;
            }

        }
        if (!same) {
            cout << words[i] << " ";
            count++;
        }
    }
    cout << endl <<"���������� �������� ���������= "<< slova-count<<endl;
}
