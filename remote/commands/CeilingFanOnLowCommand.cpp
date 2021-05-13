#include "CeilingFanOnLowCommand.hpp"


CeilingFanOnLowCommand::CeilingFanOnLowCommand(CeilingFan& fan)
    : Command{"Ceiling Fan On Low Command"}, fan{fan}
{}

void CeilingFanOnLowCommand::execute()
{
    prevSpeed = fan.getSpeed();
    fan.low();
}

void CeilingFanOnLowCommand::undo()
{
    switch(prevSpeed) {
        case CeilingFan::HIGH:      fan.high();     break;
        case CeilingFan::MEDIUM:    fan.medium();   break;
        case CeilingFan::LOW:       fan.low();      break;
        case CeilingFan::OFF:       fan.off();      break;
    }
}
