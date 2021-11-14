#include <EPackage/Tests/fixture.h>
#include <iostream>

namespace e
{
	void MyFixture::setUp()
	{
		std::cout << "MyFixture::setUp()\n";
	}
}
