# Lab 07 — Report

**Name:** <Ian Perez Bunuel>
*StudentID:** <C00294680>

## Build and run

```
cmake -S . -B build
cmake --build build --target lab07_tests
./build/lab07_tests --gtest_color=yes
```

## My CACC rows

Fill in the pairs you added:

| Major | Row 1 (major = T) | Row 2 (major = F) |
|-------|-------------------|-------------------|
| G     |     T F T T T     |     T F T F T     |
| D     |     T F T T T     |     T F T T F     |

## Report (150–250 words)

Explain, in your own words, why the disjunction `(A ∨ B)` needs two determining pairs — one for A and one for B — instead of one shared pair. What value must the *minor* take to make the major "matter"?

The reason for this is that the OR statement needs to be true to return a result of true. Because of this if the A=T then B needs to be B=F for the result to be true.
While if both are true then the OR statement wouldn't be true causing everything else to not matter since outside of it it's asking for an AND.
The same is done the other way, so if B=T then A needs to be F for the result to be true.

There were 2 repeated tests so there is a total of 8 needed tests in this practical instead of 10

## Screenshots

* `screenshots/vscode.png`
* `screenshots/terminal.png`
