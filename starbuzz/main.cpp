#include <iostream>
#include <iomanip>
#include <memory>

#include "beverages/espresso.hpp"
#include "beverages/dark_roast.hpp"
#include "beverages/house_blend.hpp"
#include "beverages/condiments/mocha.hpp"
#include "beverages/condiments/whip.hpp"
#include "beverages/condiments/soy.hpp"


int main()
{
	using beveragePtr = std::unique_ptr<Beverage>;

	auto printBeverage([](beveragePtr& bp) {
		std::string fullName {bp->getDescription()};
		switch(bp->getSize()) {
			case Beverage::Size::TALL:		fullName = "Tall "	 + fullName;	break;
			case Beverage::Size::GRANDE:	fullName = "Grande " + fullName;	break;
			case Beverage::Size::VENTI:		fullName = "Venti "  + fullName;	break;
		}
		std::cout << std::left << std::setw(50) << fullName << " $" << bp->cost() << '\n';
	});

	beveragePtr beverage1 {new Espresso};
	beverage1->setSize(Beverage::Size::TALL);
	printBeverage(beverage1);

	beveragePtr beverage2 {new DarkRoast};
	beverage2.reset(new Mocha {beverage2.release()});
	beverage2.reset(new Mocha {beverage2.release()});
	beverage2.reset(new Whip {beverage2.release()});
	beverage2->setSize(Beverage::Size::GRANDE);
	printBeverage(beverage2);

	beveragePtr beverage3 {new HouseBlend};
	beverage3.reset(new Soy {beverage3.release()});
	beverage3.reset(new Mocha {beverage3.release()});
	beverage3.reset(new Whip {beverage3.release()});
	beverage3->setSize(Beverage::Size::VENTI);
	printBeverage(beverage3);
}
