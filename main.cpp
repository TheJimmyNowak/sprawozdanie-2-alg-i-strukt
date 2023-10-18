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

void printAll(int *arr, int n, int pos) {
  for (int i = 0; i < n; i++) {
    if (i - 1 == pos)
      cout << "*" << arr[i] << endl;
    else
      cout << arr[i] << endl;
  }
}

int main() {
  int *D, n, key, i, pos;
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
  pos = -1;
  for (int i = 0; i <= n; i++) {
    if (D[i] == key) {
      pos = i + 1;
      break;
    }
  }

  cout << "Klucz na pozycji: " << pos << endl;
  printAll(D, n, pos);
  delete[] D;
  return 0;
}
