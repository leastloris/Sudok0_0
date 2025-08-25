#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    const long long N = 3'000'000;
    vector<long long> data(N);
    for (long long i = 0; i < N; i++) data[i] = i;

    auto start = high_resolution_clock::now();

    long long total = 0;
    for (auto x : data) {
        total += x * x; // stays in hardware 64-bit
    }

    auto end = high_resolution_clock::now();

    cout << "Sum of squares: " << total << endl;
    cout << "Execution time (C++): "
         << duration<double>(end - start).count()
         << " seconds" << endl;
}
