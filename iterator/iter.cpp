// iter.cpp
#include <cassert>
#include "iter.h"

using namespace iter;

int main() 
{
	try {
		test_apply();
		test_choose();
		test_concatenate();
		test_constant();
		test_enumerator();
		test_expr();
		test_factorial();
		test_input();
		test_iterator();
		test_iota();
		test_pair();
		test_pow();
		test_skip();
		/*
//		test_sequence();
		*/

/*		
*/	}
	catch (...) {
		return -1;
	}

	return 0;
}