#include <iostream>
#include <chrono>
#include <unistd.h>  // required for sleep function

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  sleep(10);  // do some work
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> duration = end - start;

  std::cout << "Time taken by function: " << duration.count() << " seconds" << std::endl;
  return 0;
}