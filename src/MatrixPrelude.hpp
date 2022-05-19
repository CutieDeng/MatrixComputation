#include "std.hpp"

#ifdef Use 
#undef Use 
#endif
#define Use using namespace 

namespace Matrix { 
    inline namespace Prelude {
        class LAssertError: public std::logic_error {
            public: 
            using std::logic_error::logic_error;
        };  

        template <typename T> 
        void lassert (bool expression, T &&info) {
            if (!expression) 
                throw LAssertError(std::forward<T>(info));
        }
    }
}