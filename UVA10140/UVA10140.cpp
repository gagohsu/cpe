#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int isprime(long long data)
{
  for (int i = 2; i <= sqrt(data); i++)
  {
    if (data % i == 0)
      return 0;
  }
  return 1;
}
int main()
{
  long long a, b;
  while (cin >> a >> b)
  {
    vector<long long> datapool;
    for (int i = a; i <= b; i++)
    {
      int t = isprime(i);
      if (t == 1)
      {
        datapool.push_back(i);
      }
    }
    if (datapool.size() < 2)
      cout << "There are no adjacent primes." << endl;

    else
    {
      int max = 0;
      int min = b;
      int minindex = 0;
      int maxindex = 0;
      for (int i = 0; i < datapool.size() - 1; i++)
      {
        int dis = datapool[i + 1] - datapool[i];
        if (max < dis)
        {
          max = dis;
          maxindex = i;
        }
        if (min > dis)
        {
          min = dis;
          minindex = i;
        }
      }
      cout << datapool[minindex] << "," << datapool[minindex + 1] << " are closest, " << datapool[maxindex] << "," << datapool[maxindex + 1] << " are most distant." << endl;
    }
  }

  return 0;
}
