#include <iostream>
using namespace std;
int main()
{
  int n;
  while (cin >> n)
  {
    int x = 0;
    int data[3010] = {0};
    data[0] = 1;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 0; j <= x; j++)
      {
        if (data[j] != 0)
          data[j] *= i;
      }
      for (int j = 0; j < x + 10; j++)
      {
        if (data[j] >= 10)
        {
          data[j + 1] += data[j] / 10;
          data[j] %= 10;
        }
      }
      for (int j = 3009; j >= 0; j--)
        if (data[j] != 0)
        {
          x = j;
          break;
        }
    }
    int sum = 0;
    for (int i = 0; i <= x; i++)
      sum += data[i];
    cout << sum << endl;
  }
}
