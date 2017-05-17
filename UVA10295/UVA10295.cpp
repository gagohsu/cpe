#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b;
  string s;
  map<string, int> D;
  while (a--)
  {
    cin >> s >> c;
    D[s] = c;
  }
  while (b--)
  {
    string ss;
    int sum = 0;
    while (cin >> ss)
    {
      if (ss == ".")
        break;
      sum += D[ss];
    }
    cout << sum << endl;
    ;
  }
  return 0;
}
