#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a;
  while (a--)
  {
    cin >> b >> c;
    map<char, char> data;
    string k, v, s, d;
    while (b--)
    {
      cin >> v >> k;
      data[k[0]] = v[0];
    }
    while (c--)
    {
      cin >> s >> d;
      char t = s[0];
      string ss = "", sd = "";
      while (t != 'R')
      {
        ss += t;
        t = data[t];
      }
      ss += t;
      t = d[0];
      while (t != 'R')
      {
        sd += t;
        t = data[t];
      }
      sd += t;
      int i, j;
      for (i = ss.length() - 1, j = sd.length() - 1; sd[j] == ss[i] && j >= 0 && i >= 0; i--, j--)
      {
      }
      for (int k = 0; k <= i + 1; k++)
      {
        cout << ss[k];
      }
      for (int k = j; k >= 0; k--)
      {
        cout << sd[k];
      }
      cout << endl;
    }
  }
  return 0;
}
