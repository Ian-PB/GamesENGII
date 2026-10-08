# Lab 05 — Report

**Name:** <Full Name>

**StudentID:** <StudentID>


## Coverage summary

State coverage:  3 / 3
Transition coverage: 5 / 5

## Report (250-500 words max)

    1. Explain the difference between state coverage and transition coverage in your own words. Could a test suite achieve 100 % state coverage without achieving 100 % transition coverage? 
    State coverage covers that each state works while transition coverage checks that a transition from 1 state to another works. So, checking that the state is working is just being in a state while the transition checks that the machine can go from ON -> OFF without any issues.
    Yes, a test could achieve 100% state coverage without achieving 100% transition coverage if it reaches every state but not every transition. For example: On -> Paused -> Off covers all states but the transition from On to Off was never checked. This could cause issues since the transition could be flawed in some way, not letting the code advance, work as intended or even fully break.


    2. Give one example of a bug in `transition()` that would slip past state coverage but be caught by transition coverage.
    If the actual transition between states had a bug, then then state coverage wouldn’t see it. So, for example the ON state may work perfectly by itself and the OFF state may work perfectly, but transitioning between them could cause an issue like the transition code being wrong so it can never reach it or some other issue could arise.


## Screenshots
To be provided as:
* `screenshots/vscode.png`
* `screenshots/terminal.png`
