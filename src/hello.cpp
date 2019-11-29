#include <hello/hello.h>

#include <ostream>

namespace hello
{

std::ostream& greetings(std::ostream& stream)
{
    return stream << "Hello, corehard!";
}

}
