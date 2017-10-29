#include <iostream>
#include <string>
#include "MachineState.h"

MachineState::MachineState()
{
    count = -1;
}

void MachineState::addAcceptedInput(std::string s, MachineState &state)
{
    if (count < CAPACITY - 1)
    {
        acceptedInput[++count] = s;
        nextStates[count] = state;
    }
    else
        std::cout << "MachineState is full." << std::endl;
}

std::string MachineState::getAcceptedInputAt(int i) const
{
    return acceptedInput[i];
}

MachineState &MachineState::getStateAt(int i) const
{
    return nextStates[i];
}


