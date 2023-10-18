#include <cstdlib>
#include <iostream>
using namespace std;

#define N 20

int main() {
  int Z[N];
  int i, maxZ, minZ, p = -1;

  // Define array
  srand(time(NULL));
  for (i = 0; i < N; i++)
    Z[i] = rand() % 10;

  maxZ = 0;
  minZ = 1000;
  for (i = 1; i < N; i++) {
    if (Z[i] > maxZ)
      maxZ = Z[i];

    if (Z[i] < minZ)
      minZ = Z[i];
  }
  cout << "min" << minZ << endl;
  cout << "max" << maxZ << endl;

  int frequencyMin = 0;
  int frequencyMax = 0;
  for (i = 0; i < N; i++) {
    cout << Z[i] << endl;
    if (Z[i] == minZ)
      frequencyMin++;

    if (Z[i] == maxZ)
      frequencyMax++;
  }

  if (frequencyMax < frequencyMin)
    cout << "Min występuję częściej (" << frequencyMin << ")" << endl;
  else if (frequencyMax > frequencyMin)
    cout << "Max występuję częściej (" << frequencyMax << ")" << endl;
  else
    cout << "Min i max wystąpiło tyle samo razy (" << frequencyMin << ")"
         << endl;
  return 0;
}
