// Lab 05 - Testing a Three State Machine
// Name  : Ian Perez Bunuel
// StudentID: C0029480

#include <gtest/gtest.h>
#include "machine.hpp"

// -------- State coverage --------
// Visit OFF, ON, PAUSED in a single sequence.
TEST(Machine, VisitsAllThreeStates) {
    Machine m;
    EXPECT_EQ(m.current(), State::OFF);
    // TODO: drive the machine to ON, then to PAUSED, checking with EXPECT_EQ after each step.

    // Transition to ON and check
    m.step(Event::powerOn);
    EXPECT_EQ(m.current(), State::ON);

    // Transition to PAUSED and check
    m.step(Event::pause);
    EXPECT_EQ(m.current(), State::PAUSED);
}

// -------- Transition coverage: one test per transition --------
TEST(Machine, OffPowerOnGoesToOn) {
    Machine m;
    EXPECT_EQ(m.transition(State::OFF, Event::powerOn), State::ON);
}

TEST(Machine, OnPowerOffGoesToOff) {
    // TODO
    FAIL() << "not implemented";
}

TEST(Machine, OnPauseGoesToPaused) {
    // TODO
    FAIL() << "not implemented";
}

TEST(Machine, PausedResumeGoesToOn) {
    // TODO
    FAIL() << "not implemented";
}

TEST(Machine, PausedPowerOffGoesToOff) {
    // TODO
    FAIL() << "not implemented";
}
