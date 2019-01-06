#include <EPackage/fixture.h>
#include <EPackage/function.h>

int main(int, char**)
{
    e::MyFixture f;
    f.setUp();
    
    e::function();

    return 0;
}
