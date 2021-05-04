def make_hpp(fn, cn):
	s = '#pragma once\n\n'					\
		'#include "beverage.hpp"\n\n\n'		\
											\
		f'class {cn} : public Beverage\n'	\
		'{\n'								\
		'public:\n'							\
		f'	{cn}();\n'						\
		'	double cost() const;\n'			\
		'};\n'
	
	f = open(f'{fn}.hpp', 'w')
	f.write(s)
	f.close()

def make_cpp(fn, cn, cost, desc):
	s = f'#include "{fn}.hpp"\n\n\n'	\
										\
		f'{cn}::{cn}()\n'				\
		'{\n'							\
		f'	description = "{desc}";\n'	\
		'}\n\n'							\
										\
		f'double {cn}::cost() const\n'	\
		'{\n'							\
		f'	return {cost};\n'			\
		'}\n'
	
	f = open(f'{fn}.cpp', 'w')
	f.write(s)
	f.close()

def make_beverage(filename, classname, cost, description):
	make_hpp(filename, classname)
	make_cpp(filename, classname, cost, description)


beverages = [
	('house_blend', 'HouseBlend',	'.89',	'House Blend Coffee'),
	('dark_roast',	'DarkRoast',	'.99',	'Dark Roast Coffee'),
	('decaf',		'Decaf', 		'1.05',	'Decaf coffee'),
	('espresso', 	'Espresso',		'1.99',	'Espresso'),
]

for beverage in beverages:
	make_beverage(*beverage)
