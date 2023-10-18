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
      p = i;
    }
  }
  for (i = 0; i < N; i++) {
    cout << Z[i] << endl;
  }
  cout << "Max= " << maxZ << endl;
  cout << "Szukany element jest na pozycji: " << p << endl << endl;
  return 0;
}
