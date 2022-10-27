#include <iostream>
#include <cmath>
using namespace std;

long long F(long long n)
{
    long long a = 1, b = 0, temp;
    while (n > 0)
    {
        temp = a;
        a = a + b;
        b = temp;
        n--;
    }
    return b;
}
int main()
{
    long long n;
    cin >> n;
    for (int i = 0; i <= 100; i++) {
        if (F(i) > n){
            cout << F(i);
            break;
        }
    }
    return 0;
}


