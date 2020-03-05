#pragma once

#include <iosfwd>
#include <string>

#include <libbigdemo/export.hxx>

namespace bigdemo
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBBIGDEMO_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);

  LIBBIGDEMO_SYMEXPORT
  void kikoo(std::string);
}
