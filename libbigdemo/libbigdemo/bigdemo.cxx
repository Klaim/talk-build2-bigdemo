#include <libbigdemo/bigdemo.hxx>
#include <fmt/format.h>
#include <sol/state.hpp>
#include <nlohmann/json.hpp>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace bigdemo
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name lol");

    o << "Hello, " << n << '!' << endl;
  }
}
