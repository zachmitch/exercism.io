#include "gigasecond.h"
#include "boost/date_time/posix_time/posix_time.hpp" 

using namespace boost::gregorian;
using namespace boost::posix_time;

ptime gigasecond::advance(ptime entry){

	return entry + seconds(1000000000); 
}
