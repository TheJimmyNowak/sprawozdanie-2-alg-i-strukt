#include <cstdlib>
#include <iostream>
using namespace std;

#define N 20

int main() {
  int Z[N];
  int i, maxZ, p = -1;

  // Define array
  srand(time(NULL));
  for (i = 0; i < N; i++)
    Z[i] = rand() % 1000;

  maxZ = 0;
  for (i = 1; i < N; i++) {
    if (Z[i] > maxZ) {
      maxZ = Z[i];
    }
  }

  int frequency = 0;
  for (i = 0; i < N; i++) {
    cout << Z[i] << endl;
    if (Z[i] == maxZ)
      frequency++;
  }
  cout << "Max= " << maxZ << endl;
  cout << "Częstość= " << frequency << endl;
  return 0;
}
