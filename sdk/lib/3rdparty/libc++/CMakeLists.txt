
set_cpp(WITH_RTTI WITH_EXCEPTIONS WITH_STL)

add_definitions(
    # crt
    -D__STDC_LIMIT_MACROS
    -D__STDC_CONSTANT_MACROS
    # libc++
    -D_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS
    )

list(APPEND SOURCE
#  src/algorithm.cpp
#  src/any.cpp
#  src/bind.cpp
#  src/charconv.cpp
#  src/chrono.cpp
#  src/condition_variable.cpp
#  src/condition_variable_destructor.cpp
#  src/debug.cpp
#  src/exception.cpp
#  src/functional.cpp
#  src/future.cpp
#  src/hash.cpp
#  src/include/apple_availability.h
#  src/include/atomic_support.h
#  src/include/config_elast.h
#  src/include/refstring.h
#  src/ios.cpp
#  src/iostream.cpp
#  src/locale.cpp
#  src/memory.cpp
#  src/mutex.cpp
#  src/mutex_destructor.cpp
#  src/new.cpp
#  src/optional.cpp
#  src/random.cpp
#  src/regex.cpp
#  src/shared_mutex.cpp
#  src/stdexcept.cpp
  src/string.cpp
#  src/strstream.cpp
#  src/support/runtime/exception_fallback.ipp
#  src/support/runtime/exception_glibcxx.ipp
#  src/support/runtime/exception_libcxxabi.ipp
#  src/support/runtime/exception_libcxxrt.ipp
#  src/support/runtime/exception_msvc.ipp
#  src/support/runtime/exception_pointer_cxxabi.ipp
#  src/support/runtime/exception_pointer_glibcxx.ipp
#  src/support/runtime/exception_pointer_msvc.ipp
#  src/support/runtime/exception_pointer_unimplemented.ipp
#  src/support/runtime/new_handler_fallback.ipp
#  src/support/runtime/stdexcept_default.ipp
#  src/support/runtime/stdexcept_vcruntime.ipp
#  src/support/win32/locale_win32.cpp
#  src/support/win32/support.cpp
#  src/support/win32/thread_win32.cpp  src/system_error.cpp
#  src/thread.cpp
#  src/typeinfo.cpp
#  src/utility.cpp
#  src/valarray.cpp
#  src/variant.cpp
  src/vector.cpp
  )

add_library(libc++
    ${SOURCE}
    )
