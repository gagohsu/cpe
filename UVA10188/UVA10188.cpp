#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a, b;
  string c, d;
  int r = 1;
  while (cin >> a)
  {
    if (a == 0)
      break;
    cin.ignore();
    c = "";
    while (a--)
    {
      string tmp;
      getline(cin, tmp);
      c += (":" + tmp);
    }
    cin >> b;
    cin.ignore();
    d = "";
    while (b--)
    {
      string tmp;
      getline(cin, tmp);
      d += (":" + tmp);
    }
    if (c == d)
      cout << "Run #" << (r++) << ": Accepted" << endl;
    else
    {
      string nc = "", nd = "";
      for (int i = 0; i < c.length(); i++)
      {
        if (c[i] <= '9' && c[i] >= '0')
          nc += c[i];
      }
      for (int i = 0; i < d.length(); i++)
      {
        if (d[i] <= '9' && d[i] >= '0')
          nd += d[i];
      }
      cout << "Run #" << (r++);
      if (nd == nc)
        cout << ": Presentation Error" << endl;
      else
        cout << ": Wrong Answer" << endl;
    }
  }

  return 0;
}
