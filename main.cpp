#include <iostream>

//C++14
auto f_local() noexcept
{
  return "Hello world, on a local computer\n";
}

auto f_travis() noexcept
{
  return "Hello world, on Travis CI\n";
}

///Detects if this code is run on a Travis CI server
bool is_travis() {
  return std::getenv("TRAVIS");
}

int main() {

  if (is_travis())
  {
    std::cout << f_travis();
  }
  else
  {
    std::cout << f_local();
  }
}
