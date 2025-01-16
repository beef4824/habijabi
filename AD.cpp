#include <iostream>
using namespace std;

int main()
{
    int x;
    string h;
    cin >> x;
    cin >> h;
    int countD = 0, countA = 0;
    for (int i = 0; i < h.length(); i++)
    {
        if (h[i] == 'A')
        {
            countA++;
        }
        else if (h[i] == 'D')
        {
            countD++;
        }
    }
    if (countA < countD)
    {
        cout << "Danik" << endl;
    }
    else if (countA > countD)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}
