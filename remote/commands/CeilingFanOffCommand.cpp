#include "CeilingFanOffCommand.hpp"


CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan& fan)
    : Command{"Ceiling Fan Off Command"}, fan{fan}
{}

void CeilingFanOffCommand::execute()
{
    prevSpeed = fan.getSpeed();
    fan.off();
}

void CeilingFanOffCommand::undo()
{
    switch(prevSpeed) {
        case CeilingFan::HIGH:      fan.high();     break;
        case CeilingFan::MEDIUM:    fan.medium();   break;
        case CeilingFan::LOW:       fan.low();      break;
        case CeilingFan::OFF:       fan.off();      break;
    }
}
