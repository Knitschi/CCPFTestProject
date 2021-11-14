#include <APackage/function.h>
#include <BPackage/function.h>
#include <CPackage/function.h>
#include <EPackage/function.h>

namespace a
{
	void function()
	{
		b::function();
		c::function();
		e::function();
	}
}
