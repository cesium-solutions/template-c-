#if defined USE_PRECOMPILED_HEADERS /* therefore the default is to use precompiled headers */

#if defined WIN32
#  define WINDOWS_LEAN_AND_MEAN
#  define _WINSOCKAPI_
#endif

#include <boost/shared_ptr.hpp>
#include <boost/signal.hpp>
#include <boost/bind.hpp>
#include <boost/thread.hpp>
#include <boost/cstdint.hpp>

#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <string>
#include <memory>

#endif /* defined USE_PRECOMPILED_HEADERS */
