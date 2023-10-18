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

void printAllTrue(bool *arr, int n) {
  cout << "Klucze na pozycjach:" << endl;
  for (int i = 0; i < n; i++) {
    if (arr[i])
      cout << "Pozycja: " << i + 1 << endl;
  }
}

int main() {
  int *D, n, key, i, pos, frequency;
  frequency = 0;
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
  for (int i = n / 2; i < n; i++) {
    if (D[i] == key) {
      cout << "Pozycja " << i + 1 << endl;
      break;
    }
  }

  delete[] D;
  return 0;
}
