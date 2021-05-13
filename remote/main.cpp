#include <iostream>

#include "remotes/SimpleRemoteControl.hpp"
#include "remotes/RemoteControl.hpp"
#include "remotes/RemoteControlWithUndo.hpp"
#include "remotes/RemoteControlLambda.hpp"

#include "devices/CeilingFan.hpp"
#include "devices/GarageDoor.hpp"
#include "devices/Hottub.hpp"
#include "devices/Light.hpp"
#include "devices/Stereo.hpp"
#include "devices/TV.hpp"

#include "commands/LightOnCommand.hpp"
#include "commands/LightOffCommand.hpp"
#include "commands/CeilingFanOnHighCommand.hpp"
#include "commands/CeilingFanOnMediumCommand.hpp"
#include "commands/CeilingFanOnLowCommand.hpp"
#include "commands/CeilingFanOffCommand.hpp"
#include "commands/GarageDoorUpCommand.hpp"
#include "commands/GarageDoorDownCommand.hpp"
#include "commands/HottubOnCommand.hpp"
#include "commands/HottubOffCommand.hpp"
#include "commands/StereoOnWithCDCommand.hpp"
#include "commands/StereoOffCommand.hpp"
#include "commands/TVOnCommand.hpp"
#include "commands/TVOffCommand.hpp"
#include "commands/MacroCommand.hpp"


void test1()
{
	const std::string line(10, '=');
	std::cout << line << " 1 " << line << '\n';

	SimpleRemoteControl remote;
	Light light("Living room");

	Command::pointer lightOn {new LightOnCommand {light}};

	remote.setCommand(lightOn);
	remote.buttonWasPressed();
}

void test2()
{
	const std::string line(10, '=');
	std::cout << line << " 2 " << line << '\n';

	RemoteControl remote;

	Light livingRoomLight {"living room"};
	Light kitchenLight {"kitchen"};
	CeilingFan ceilingFan {"living room"};
	GarageDoor garageDoor {""};
	Stereo stereo {"living room"};

	Command::pointer livingRoomLightOn	{new LightOnCommand {livingRoomLight}};
	Command::pointer livingRoomLightOff	{new LightOffCommand {livingRoomLight}};
	Command::pointer kitchenLightOn		{new LightOnCommand {kitchenLight}};
	Command::pointer kitchenLightOff	{new LightOffCommand {kitchenLight}};

	Command::pointer ceilingFanOnHigh	{new CeilingFanOnHighCommand {ceilingFan}};
	Command::pointer ceilingFanOff		{new CeilingFanOffCommand {ceilingFan}};

	Command::pointer garageDoorUp		{new GarageDoorUpCommand {garageDoor}};
	Command::pointer garageDoorDown		{new GarageDoorDownCommand {garageDoor}};

	Command::pointer stereoOnWithCD		{new StereoOnWithCDCommand {stereo}};
	Command::pointer stereoOff			{new StereoOffCommand {stereo}};

	remote.setCommand(0, livingRoomLightOn,	livingRoomLightOff);
	remote.setCommand(1, kitchenLightOn,	kitchenLightOff);
	remote.setCommand(2, ceilingFanOnHigh, 	ceilingFanOff);
	remote.setCommand(3, stereoOnWithCD, 	stereoOff);

	std::cout << remote.toString() << '\n';

	remote.onButtonWasPushed(0);
	remote.offButtonWasPushed(0);
	remote.onButtonWasPushed(1);
	remote.offButtonWasPushed(1);
	remote.onButtonWasPushed(2);
	remote.offButtonWasPushed(2);
	remote.onButtonWasPushed(3);
	remote.offButtonWasPushed(3);
}

void test3()
{
	const std::string line(10, '=');
	std::cout << line << " 3 " << line << '\n';

	RemoteControlWithUndo remote;
	CeilingFan ceilingFan {"living room"};

	Command::pointer ceilingFanOnHigh	{new CeilingFanOnHighCommand {ceilingFan}};
	Command::pointer ceilingFanOnMedium	{new CeilingFanOnMediumCommand {ceilingFan}};
	Command::pointer ceilingFanOnLow	{new CeilingFanOnLowCommand {ceilingFan}};
	Command::pointer ceilingFanOff		{new CeilingFanOffCommand {ceilingFan}};

	remote.setCommand(0, ceilingFanOnHigh,		ceilingFanOff);
	remote.setCommand(1, ceilingFanOnMedium,	ceilingFanOff);
	remote.setCommand(2, ceilingFanOnLow,		ceilingFanOff);

	auto print_remote([&] {	std::cout << remote.toString() << '\n'; });

	remote.onButtonWasPushed(0);
	remote.offButtonWasPushed(0);
	print_remote();
	remote.undoButtonWasPushed();

	remote.offButtonWasPushed(0);
	remote.onButtonWasPushed(0);
	print_remote();
	remote.undoButtonWasPushed();

	remote.onButtonWasPushed(1);
	print_remote();
	remote.undoButtonWasPushed();
}

void test4()
{
	const std::string line(10, '=');
	std::cout << line << " 4 " << line << '\n';

	RemoteControlWithUndo remote;

	Light light {"living room"};
	TV tv {"living room"};
	Stereo stereo {"living room"};
	Hottub hottub;

	Command::pointer lightOn	{new LightOnCommand {light}};
	Command::pointer lightOff	{new LightOffCommand {light}};
	Command::pointer tvOn		{new TVOnCommand {tv}};
	Command::pointer tvOff		{new TVOffCommand {tv}};
	Command::pointer stereoOn	{new StereoOnWithCDCommand {stereo}};
	Command::pointer stereoOff	{new StereoOffCommand {stereo}};
	Command::pointer hottubOn	{new HottubOnCommand {hottub}};
	Command::pointer hottubOff	{new HottubOffCommand {hottub}};

	Command::pointer partyOn	{new MacroCommand {lightOn, tvOn, stereoOn, hottubOn}};
	Command::pointer partyOff	{new MacroCommand {lightOff, tvOff, stereoOff, hottubOff}};

	remote.setCommand(0, partyOn, partyOff);

	std::cout << remote.toString() << '\n';
	std::cout << "---- Pushing Macro On ----\n";
	remote.onButtonWasPushed(0);
	std::cout << "---- Pushing Macro Off ----\n";
	remote.offButtonWasPushed(0);
	std::cout << "---- Pushing Macro Undo ----\n";
	remote.undoButtonWasPushed();
}

void test5()
{
	const std::string line(10, '=');
	std::cout << line << " 5 " << line << '\n';

	RemoteControlLambda remote;

	Light livingRoomLight {"living room"};
	Light kitchenLight {"kitchen"};
	CeilingFan ceilingFan {"living room"};
	GarageDoor garageDoor {""};
	Stereo stereo {"living room"};

	remote.setCommand(0,
		[&] { livingRoomLight.on(); },
		[&] { livingRoomLight.off(); }
	);
	remote.setCommand(1,
		[&] { kitchenLight.on(); },
		[&] { kitchenLight.off(); }
	);
	remote.setCommand(2,
		[&] { ceilingFan.high(); },
		[&] { ceilingFan.off(); }
	);
	remote.setCommand(3,
		[&] { garageDoor.up(); },
		[&] { garageDoor.down(); }
	);
	remote.setCommand(4,
		[&] { stereo.on(); stereo.setCd(); stereo.setVolume(11); },
		[&] { stereo.off(); }
	);

	remote.onButtonWasPushed(0);
	remote.offButtonWasPushed(0);
	remote.onButtonWasPushed(1);
	remote.offButtonWasPushed(1);
	remote.onButtonWasPushed(2);
	remote.offButtonWasPushed(2);
	remote.onButtonWasPushed(3);
	remote.offButtonWasPushed(3);
	remote.onButtonWasPushed(4);
	remote.offButtonWasPushed(4);
}

int main()
{
	test1();
	std::cout << '\n';
	test2();
	std::cout << '\n';
	test3();
	std::cout << '\n';
	test4();
	std::cout << '\n';
	test5();
}
