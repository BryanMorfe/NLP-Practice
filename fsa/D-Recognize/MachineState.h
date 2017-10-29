#ifndef MACHINESTATE_H
#define MACHINESTATE_H

#include <string>

class MachineState
{
public:
    MachineState();
    void addAcceptedInput(std::string s, MachineState &state);
    std::string getAcceptedInputAt(int i) const;
    MachineState &getStateAt(int i) const;
private:
    const int CAPACITY = 3;
    std::string acceptedInput[CAPACITY];
    MachineState nextStates[CAPACITY];
    int count;
};
