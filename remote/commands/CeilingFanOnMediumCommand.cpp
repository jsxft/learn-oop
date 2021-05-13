#include "CeilingFanOnMediumCommand.hpp"


CeilingFanOnMediumCommand::CeilingFanOnMediumCommand(CeilingFan& fan)
    : Command{"Ceiling Fan On Medium Command"}, fan{fan}
{}

void CeilingFanOnMediumCommand::execute()
{
    prevSpeed = fan.getSpeed();
    fan.medium();
}

void CeilingFanOnMediumCommand::undo()
{
    switch(prevSpeed) {
        case CeilingFan::HIGH:      fan.high();     break;
        case CeilingFan::MEDIUM:    fan.medium();   break;
        case CeilingFan::LOW:       fan.low();      break;
        case CeilingFan::OFF:       fan.off();      break;
    }
}
