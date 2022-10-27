#include <iostream>
#include <map>
using namespace std;

const int MAX = 101;
int t, n, a[MAX], m, b[MAX];
map<int, int> s_save;


void Input(){
    cin>>n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin>>m;
    for (int i = 1; i <= m; i++)
        cin >> b[i];
}

int Output(){
    int count = 0;
    for(int i = 1; i <= n; i++)
        if(s_save[a[i]] == 0)
            s_save[a[i]] = 1;
    for(int i = 1; i <= m; i++)
        if(s_save[b[i]] == 1)
            count++;
    cout << count << endl;
}

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Input();
        Output();
    }
    return 0;
}
