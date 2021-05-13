#include "CeilingFanOnHighCommand.hpp"


CeilingFanOnHighCommand::CeilingFanOnHighCommand(CeilingFan& fan)
    : Command{"Ceiling Fan On High Command"}, fan{fan}
{}

void CeilingFanOnHighCommand::execute()
{
    prevSpeed = fan.getSpeed();
    fan.high();
}

void CeilingFanOnHighCommand::undo()
{
    switch(prevSpeed) {
        case CeilingFan::HIGH:      fan.high();     break;
        case CeilingFan::MEDIUM:    fan.medium();   break;
        case CeilingFan::LOW:       fan.low();      break;
        case CeilingFan::OFF:       fan.off();      break;
    }
}
