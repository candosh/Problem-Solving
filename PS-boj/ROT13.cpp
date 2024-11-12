// 풀이 : https://seize-the-day9.tistory.com/51

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] < 97)
        {
            if (str[i] + 13 > 90)
            {
                str[i] -= 13; // str[i] + 13 -26
            }
            else
                str[i] += 13;
        }
        else if (str[i] >= 97 && str[i] < 123)
        {
            if (str[i] + 13 > 122)
            {
                str[i] -= 13;
            }
            else
                str[i] += 13;
        }
    }

    cout << str << "\n";

    return 0;
}
