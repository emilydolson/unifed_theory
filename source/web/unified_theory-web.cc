//  This file is part of unified_theory
//  Copyright (C) Emily Dolson, 2019.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "web/web.h"

namespace UI = emp::web;

UI::Document doc("emp_base");

int main()
{
  doc << "<h1>Hello, browser!</h1>";
  std::cout << "Hello, console!" << std::endl;

}
