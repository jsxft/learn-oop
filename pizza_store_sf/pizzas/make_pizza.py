
def save_to_file(data, filename):
	f = open(filename, 'w')
	f.write(data)
	f.close()

def make_hpp(fn, cn):
	s = '#pragma once\n\n'				\
		'#include "pizza.hpp"\n\n\n'	\
										\
		f'class {cn} : public Pizza\n'	\
		'{\n'							\
		'public:\n'						\
		f'	{cn}();\n'					\
		'};\n'
	save_to_file(s, f'{fn}.hpp')

def make_cpp(fn, cn):
	s = f'#include "{fn}.hpp"\n\n'	\
		f'{cn}::{cn}()\n'			\
		'{\n'						\
		'	name = /* NAME */;\n'	\
		'	dough = /* DOUGH */;\n'	\
		'	sauce = /* SAUCE */;\n'	\
		'	/* ADD TOPPINGS */;\n'	\
		'}\n'
	save_to_file(s, f'{fn}.cpp')

def make_pizza(filename, classname):
	make_hpp(filename, classname)
	make_cpp(filename, classname)


pizzas = [
	('cheese_pizza',	'CheesePizza'),
	('pepperoni_pizza',	'PepperoniPizza'),
	('clam_pizza',		'ClamPizza'),
	('veggie_pizza', 	'VeggiePizza'),
]

for pizza in pizzas:
	make_pizza(*pizza)
