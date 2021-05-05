#include <iostream>
#include <sstream>

#include "pizza.hpp"


void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 350\n";
}

void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices\n";
}

void Pizza::box()
{
    std::cout << "Place pizza in official PizzaStore box\n";
}

void Pizza::setName(const std::string &n)
{
    name = n;
}

std::string Pizza::getName() const
{
    return name;
}

std::string Pizza::toString() const
{
    std::stringstream ss;
    ss << "---- " << name << " ----\n";
    if (dough)      { ss << std::string{*dough} << '\n'; }
    if (sauce)      { ss << std::string{*sauce} << '\n'; }
    if (cheese)     { ss << std::string{*cheese} << '\n'; }
    for (const auto &veggie : veggies) {
        if (veggie) { ss << std::string(*veggie) << '\n'; }
    }
    if (clam)       { ss << std::string{*clam} << '\n'; }
    if (pepperoni)  { ss << std::string{*pepperoni} << '\n'; }
    ss << std::string(name.length() + 10, '-') << '\n';
    return ss.str();
}

Pizza::operator std::string() const
{
    return toString();
}
