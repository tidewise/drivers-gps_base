#include <boost/test/unit_test.hpp>
#include <gps_base/Driver.hpp>

using namespace gps_base;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_instantiated)
{
    gps_base::Driver driver;
}
