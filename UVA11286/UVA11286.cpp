#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main()
{
  int a, b;
  while (cin >> a && a)
  {
    map<string, int> Map;
    int max = 1;
    for (int i = 0; i < a; i++)
    {
      string tmp = "";
      vector<string> data;
      for (int j = 0; j < 5; j++)
      {
        string s;
        cin >> s;
        data.push_back(s);
      }
      sort(data.begin(), data.end());
      for (int j = 0; j < 5; j++)
      {
        tmp += data[j];
      }
      Map[tmp] += 1;
      if (max < Map[tmp])
        max = Map[tmp];
    }
    int count = 0;
    for (map<string, int>::iterator it = Map.begin(); it != Map.end(); ++it)
      if (it->second == max)
        count++;

    cout << count * max << endl;
  }

  return 0;
}
