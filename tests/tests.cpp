#include "catch.hpp"
#include "../src/rdna.hpp"

// Some basic test cases

TEST_CASE("Testing basic functionality")
{
  CHECK(randDNA(103, "ATCG", 20) == "TTAGAAGGCTTAGAGGTTAC");
  CHECK(randDNA(103, "GCAT", 20) == "CCGTGGTTACCGTGTTCCGA");
  CHECK(randDNA(-78, "TGAC", 10) == "ACTATACCCT");
  CHECK(randDNA(2183, "TACG", 37) == "TTTCTTGTTTGGAACTCTTTTTGGTGGGCGGACTTTA");
}


TEST_CASE("Testing DNA length")
{
  CHECK(randDNA(1139, "ATCG", 0) == "");
  CHECK(randDNA(1139, "ATCG", 1) == "A");
  CHECK(randDNA(1139, "ATCG", -1) == "");
}


TEST_CASE("Testing letter bases")
{
  CHECK(randDNA(66, "AAAA", 13) == "AAAAAAAAAAAAA");
  CHECK(randDNA(89, "CAT", 15) == "AACTCCCAACCCCTA");
  CHECK(randDNA(13, "T", 17) == "TTTTTTTTTTTTTTTTT");
  CHECK(randDNA(483, "CGATXUY", 50) == "XAUXYAXAGCGYTTCCCCUCXTTATTCGXYCXCATYGAGAGAXAAATTCU");

}

