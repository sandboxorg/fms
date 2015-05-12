// choose.h - combinations
#pragma once
#include "enumerator.h"

namespace iterator {

	template<class T = double>
	class choose : public enumerator_base<T*,T> {
		T n, k, nk;
	public:
		choose(T n = 0)
			: n(n), k(0), nk(1)
		{ }
		~choose()
		{ }

		operator T*() const
		{
			 return nullptr;
		}
		operator bool() const
		{
			return k <= n;
		}
		T operator*() const
		{
			return nk;
		}
		choose& operator++()
		{
			++k;
			nk *= (n - k + 1)/k;

			return *this;
		}
		choose operator++(int)
		{
			choose c(*this);

			operator++();

			return c;
		}
	};

} // iterator

#ifdef _DEBUG
#include <cassert>

using namespace iterator;

inline void test_choose()
{
	choose<> c(4);

	assert (*c == 1);
	assert (*++c == 4);
	c++;
	assert (*c == 6);
	assert (*++c == 4);
	assert (*++c == 1);
	assert (!++c);
}

#endif // _DEBUG