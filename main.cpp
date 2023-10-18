#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int search(int Z[], int n, int key) {
  int i;
  for (i = 0; i <= n; i++)
    if (Z[i] == key)
      break;
  if (i == n)
    return -1;
  else
    return i + 1;
}

int main() {
  int *D, n, key, i, p;
  cout << "Podaj rozmiar tablicy: " << endl;
  cin >> n;
  D = new int[n + 1];
  cout << "Podaj elementy tablicy: " << endl;
  for (i = 0; i < n; i++) {
    cin >> D[i];
  }
  cout << "Podaj klucz: ";
  cin >> key;
  D[n] = key;
  p = -1;
  for (int i = 0; i <= n; i++) {
    if (D[i] == key) {
      p = i + 1;
      break;
    }
  }
  p = search(D, n, key);
  cout << "Szukany element jest na pozycji: " << p << endl << endl;
  delete[] D;
  return 0;
}
