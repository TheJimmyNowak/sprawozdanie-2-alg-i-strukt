#include <iostream>
// #include <time>
#include <cstdlib>
#include <ctime>
using namespace std;
int WySzukaj(int Z[], int n, int k) {
  int i;
  for (i = 0; i <= n; i++)
    if (Z[i] == k)
      break;
  if (i == n)
    return -1;
  else
    return i + 1;
}
int main() {
  int *D, n, k, i, p;
  cout << "Podaj rozmiar tablicy: " << endl;
  cin >> n;
  D = new int[n + 1];
  cout << "Podaj elementy tablicy: " << endl;
  for (i = 0; i < n; i++) {
    cin >> D[i];
  }
  cout << "Podaj klucz: ";
  cin >> k;
  D[n] = k; // wstaw wartownika
  // Algorytm wyszukania liniowego klucza „k”
  p = -1; // pozycja - brak klucza w tablicy
  // for( int i = 0; i <= n; i++ ){
  // if ( D[i] == k ) //jeśli jest klucz w tablicy
  // { p=i+1; break; //to zapamiętaj pozycję (indeks) klucza
  // }
  // }
  p = WySzukaj(D, n, k);
  cout << "Szukany element jest na pozycji: " << p << endl << endl;
  delete[] D;
  return 0;
}
