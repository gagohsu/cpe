#include <iostream>
#include <iomanip>
using namespace std;

bool isprime(int p)
{
  if (p % 2 == 0)
    return false;
  for (int i = 3; i * i <= p; i += 2)
  {
    if (p % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int a, b;

  while (cin >> a >> b)
  {
    double d = 0;
    for (int i = a; i <= b; i++)
    {
      int n = i * i + i + 41;
      if (isprime(n))
        d += 1;
    }
    cout << fixed << setprecision(2) << d / (b - a + 1) * 100 << endl;
  }

  return 0;
}
