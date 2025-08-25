#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc <= 2) {
    cout << "run the program with a string and a number" << endl;
    return 1;
  }

  cout << "Hello " << argv[1] << " with age " << stoi(argv[2]) << endl;

  return 0;
}
