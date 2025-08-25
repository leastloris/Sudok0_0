#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    vector<long long> data(10'000'000);
    for (long long i = 0; i < (long long) data.size(); i++) {
        data[i] = i;
    }

    auto start = high_resolution_clock::now();

    long long total = 0;
    for (auto x : data) {
        total += x * x;
    }

    auto end = high_resolution_clock::now();

    cout << "Sum of squares: " << total << endl;
    cout << "Execution time (C++): "
         << duration<double>(end - start).count()
         << " seconds" << endl;

    return 0;
}
