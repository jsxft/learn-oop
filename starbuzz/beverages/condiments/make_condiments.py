def make_hpp(fn, cn):
	s = '#pragma once\n\n'							\
		f'#include "condiment_decorator.hpp"\n\n\n'	\
													\
		f'class {cn} : public CondimentDecorator\n'	\
		'{\n'										\
		'public:\n'									\
		f'	{cn}(Beverage* beverage);\n'			\
		'	std::string getDescription() const;\n'	\
		'	double cost() const;\n'					\
		'};\n'

	f = open(f'{fn}.hpp', 'w')
	f.write(s)
	f.close()

def make_cpp(fn, cn, cost, desc):
	s = f'#include "{fn}.hpp"\n\n\n'						\
															\
		f'{cn}::{cn}(Beverage* b)\n'						\
		'{\n'												\
		'	beverage.reset(b);\n'							\
		'}\n\n'												\
															\
		f'std::string {cn}::getDescription() const\n'		\
		'{\n'												\
		f'	return beverage->getDescription() + "{desc}";\n'\
		'}\n\n'												\
															\
		f'double {cn}::cost() const\n'						\
		'{\n'												\
		f'	return beverage->cost() + {cost};\n'			\
		'}\n'
	
	f = open(f'{fn}.cpp', 'w')
	f.write(s)
	f.close()

def make_condiment(filename, classname, cost, description):
	make_hpp(filename, classname)
	make_cpp(filename, classname, cost, description)


condiments = [
	('milk',	'Milk',		'.10',	', Milk'),
	('mocha',	'Mocha',	'.20',	', Mocha'),
	('soy',		'Soy', 		'.15',	', Soy'),
	('whip',	'Whip', 	'.10',	', Whip'),
]

for condiment in condiments:
	make_condiment(*condiment)
