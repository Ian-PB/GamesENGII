// Lab 02 - Testing a three-branch classifier
// Name  :
// Student ID:
//
// Task: fill in three tests inside runTests(), one per branch.
//
// Build:  g++ -std=c++17 -Wall -Wextra lab02_classify.cpp -o lab02
// Run  :  ./lab02

#include <iostream>
#include <string>



int classify(int x) {
    if (x < 0)  return -1;
    if (x == 0) return  0;
    return 1;
}

static int passes = 0;
static int fails  = 0;

static void checkEqual(int actual, int expected, const std::string& label) {
    if (actual == expected) 
    {
        ++passes;
        std::cout << "[PASS] " << label << "  (got " << actual << ")\n";
    } 
    else 
    {
        ++fails;
        std::cout << "[FAIL] " << label << "  (got " << actual << ", expected " << expected << ")\n";
    }
}

static void runTests() {
    checkEqual(classify(-5), -1, "negative branch");
    checkEqual(classify(0), 0, "zero branch");
    checkEqual(classify(5), 1, "positive branch");
}

int main() {
    runTests();
    std::cout << "\nSummary: " << passes << " passed, " << fails << " failed.\n";
    return fails == 0 ? 0 : 1;
}
