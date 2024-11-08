#include <iostream>
#include <string>
using namespace std;


// Функция проверки строки кратности
bool IsKPeriodic(const string& str,  int K) 
{
    //объявляем переменную для хранения длины строки
    int len = str.length();

    if(len % K != 0) 
    {
        cout << "Строка  " << str << "  не кратна " << K << endl;
        return false;
    }

    //проверка повторяемости подстрок
    for(int i = 0;i < len; i++)
    {
        //cout << str[i] << ' ' << str[i % K] << endl;
        if(str[i] != str[i % K])
        {
            cout << "В строке  " << str << " нет повторяемых подстрок(или не все)" << endl;    
            return false;
        }
    }
    cout << "Строка  " << str << "  кратна " << K << endl;
    return true;
}

int main()
{
    int K = 3;
    string str = "abcabcabcabc";
    string str1 = "abvabcabcabc"; 
    

    cout << IsKPeriodic(str, K) << endl;
    cout << IsKPeriodic(str1, K) << endl;

}