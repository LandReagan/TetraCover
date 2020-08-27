#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>

namespace tetralib {

struct EngineSnapshot {
    size_t timer_interval;
};

class Observer {
public:
    virtual ~Observer() {}

    virtual void update(const EngineSnapshot&) = 0;
};

class Observable {
public:
    virtual ~Observable() {}

    virtual void add_observer(Observer*) = 0;
    virtual void remove_observer(Observer*) = 0;
    virtual void notify() = 0;
};

} // namespace tetralib

#endif