#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data1, data2, data3;
    string natal = "Natal";

    cout << "Quais suas datas comemorativas preferidas?\n";
    cin >> data1 >> data2 >> data3;

    if (data1 == natal || data2 == natal || data3 == natal) {
        cout << data1 << ", " << data2 << " e " << data3 << " s�o belas festas.\n";
        cout << "O " << natal << " tamb�m � uma das minhas datas preferidas!\n";
    }
    else {
        cout << data1 << ", " << data2 << " e " << data3 << " s�o belas festas.\n";
    }

    return 0;
}
