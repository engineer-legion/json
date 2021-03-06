/*
 * test_null.cpp
 *
 *  Created on: 01.02.2015
 *      Author: mike_gresens
 */

#include "../fixture/fixture_null.hpp"
#include "stringifier_helper.hpp"

namespace json {
namespace stringifier_test {

BOOST_FIXTURE_TEST_SUITE(test_stringifier_null, fixture::fixture_null)

TEST_STRINGIFIER_EQUAL(_default);
TEST_STRINGIFIER_EQUAL(_null);

BOOST_AUTO_TEST_SUITE_END()

}
}
