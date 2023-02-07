#include "quicksort.hpp"
#include "radixsort.hpp"
#include "random.hpp"
#include "timer.hpp"

#include <iostream>

int main(){
    unsigned int maximum = 0xFFFFFFFF;
    std::vector<std::uint32_t> raidxinput = gen(tenmillion, maximum);
    std::vector<std::uint32_t> quicksortinput = gen(tenmillion, maximum);
    Timer::start("terdimann");
    RadixSort(raidxinput);
    Timer::stop("terdimann", true);
    // Timer::start("quicksort");
    // QuickSort(quicksortinput, 0, quicksortinput.size() - 1);
    // Timer::stop("quicksort", true);
}
