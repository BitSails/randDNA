#include "catch.hpp"
#include "../src/rdna.hpp"

// Some basic test cases



TEST_CASE("Testing letter bases (empty string)")
{
  CHECK(randDNA(22, "", 0) == "");
  CHECK(randDNA(22, "", 1) == "");
  CHECK(randDNA(22, "", 12) == "");
}

