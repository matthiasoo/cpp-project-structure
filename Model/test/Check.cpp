#define BOOST_TEST_MODULE UnitTesting
#include <boost/test/unit_test.hpp>

using namespace std;

BOOST_AUTO_TEST_SUITE(Check)
    BOOST_AUTO_TEST_CASE(CheckPass) {
        BOOST_TEST(true);
    }

    BOOST_AUTO_TEST_CASE(CheckFail) {
        BOOST_TEST(false);
    }
BOOST_AUTO_TEST_SUITE_END()