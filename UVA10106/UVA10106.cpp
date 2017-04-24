#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a, b;

  while (cin >> a >> b)
  {
    int data[500] = {0};
    int len = a.length() + b.length() - 2;
    for (int i = a.length() - 1; i >= 0; i--)
      for (int j = b.length() - 1; j >= 0; j--)
      {
        data[len - i - j] += ((a[i] - '0') * (b[j] - '0'));
        data[len - i - j + 1] += data[len - i - j] / 10;
        data[len - i - j] = data[len - i - j] % 10;
      }
    int datalen = a.length() + b.length() - 1;
    while (datalen > 0 && data[datalen] == 0)
      datalen--;
    for (int i = datalen; i >= 0; i--)
    {
      cout << data[i];
    }
    cout << endl;
  }
  return 0;
}
