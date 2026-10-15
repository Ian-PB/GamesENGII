# Lab 06 — Report

**Full Name: Ian Perez Bunuel** 
**Student ID: C00294680** 

## Build, test, coverage

```
cmake -S . -B build
cmake --build build --target lab06_tests
./build/lab06_tests --gtest_color=yes

cmake -S . -B build-cov -DCMAKE_CXX_FLAGS="--coverage" \
                        -DCMAKE_EXE_LINKER_FLAGS="--coverage"
cmake --build build-cov --target lab06_tests
./build-cov/lab06_tests
gcov -b -r build-cov/CMakeFiles/discount.dir/src/discount.cpp.gcno > coverage_summary.txt
```

## Coverage criteria

Predicate-coverage rows used:  2 , 2
Clause-coverage rows used:  5
Tests reported / passed:  4 / 4

## Coverage summary (paste the tail of coverage_summary.txt)

```
No executable lines
```

## Report (250-500 words)

For task 3 I used rows 2, 3, 5, since all the inputs are set to true and false at some point.

Explain the difference between Predicate Coverage and Clause Coverage. Give a pair of rows from the truth table that satisfies Predicate Coverage but not Clause Coverage, and say which clause is left unexercised. Then describe what gcov reported for `discount.cpp`: did your suite reach 100 % line coverage, 100 % branch coverage, or both, and what is the difference between those two numbers?

Predicate Coverage checks if the whole output is correct while Clause Coverage checks outputs where each element has been true and false at some point in the test.
Rows 1 and 2 cover Predicate Coverage because they check for a true output and a false output. There are 2 clauses which are left unexercised since both A and B were never set to true. To cover those I would use rows 3 and 5 since they set A and B to true.

gcov reported nothing wrong.

## Screenshots

* `screenshots/vscode.png`
* `screenshots/terminal.png`
