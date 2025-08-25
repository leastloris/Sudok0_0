#include <iostream>
using namespace std;

void sort(int a[], int i, int j) {

  int min = i;
  for(int k = i + 1; k <= j; k++) {
    if (a[k] < a[min]) {
      min = k;
      a[k], a[min] = a[min], a[k];
    }
  }
  return a[];
}

int main() {
  int x[] = {4, 5, 1, 9, 10, 2, 11, 12};
  int y[] = sort(x, 0, 7);
  cout << "sorted array : " << y[] << endl;
  return 0;
}
