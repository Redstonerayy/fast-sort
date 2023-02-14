#include "quicksort.hpp"
#include "radixsort.hpp"
#include "random.hpp"
#include "timer.hpp"

#include <iostream>

int main(){
    unsigned int maximum = 0xFFFFFFFF;
    std::vector<std::uint32_t> radixsortinput = gen(tenmillion, maximum);
    std::vector<std::uint32_t> quicksortinput = gen(tenmillion, maximum);
    Timer::start("Radixsort");
    RadixSort(radixsortinput);
    Timer::stop("Radixsort", true);
    Timer::start("Quicksort");
    QuickSort(quicksortinput, 0, quicksortinput.size() - 1);
    Timer::stop("Quicksort", true);
}
