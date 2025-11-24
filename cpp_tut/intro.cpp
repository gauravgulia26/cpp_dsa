#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();

    // code block to measure
    for (int i = 0; i < 1000000000; i++)
        ;

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    float total_time = duration.count() / (6.0 * 1e6);

    cout << "Execution time: " << total_time << " Minutes\n";
}
