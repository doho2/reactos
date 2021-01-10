
list(APPEND SOURCE
#    src/algorithm.cpp
#    src/any.cpp
#    src/atomic.cpp
#    src/barrier.cpp
#    src/bind.cpp
#    src/charconv.cpp
#    src/chrono.cpp
#    src/condition_variable.cpp
#    src/condition_variable_destructor.cpp
#    src/debug.cpp
#    src/exception.cpp
#    src/functional.cpp
#    src/future.cpp
#    src/hash.cpp
#    src/ios.cpp
#    src/iostream.cpp
#    src/locale.cpp
#    src/memory.cpp
#    src/mutex.cpp
#    src/mutex_destructor.cpp
#    src/new.cpp
#    src/optional.cpp
#    src/random.cpp
#    src/random_shuffle.cpp
#    src/regex.cpp
#    src/shared_mutex.cpp
#    src/stdexcept.cpp
#    src/string.cpp
#    src/strstream.cpp
#    src/system_error.cpp
#    src/thread.cpp
#    src/typeinfo.cpp
#    src/utility.cpp
#    src/valarray.cpp
#    src/variant.cpp
    src/vector.cpp
#    src/filesystem/directory_iterator.cpp
#    src/filesystem/int128_builtins.cpp
#    src/filesystem/operations.cpp
#    src/support/win32/locale_win32.cpp
#    src/support/win32/support.cpp
#    src/support/win32/thread_win32.cpp
    )

add_library(libc++
    ${SOURCE}
    )

target_include_directories(libc++ PRIVATE
    ${REACTOS_SOURCE_DIR}/sdk/include/libc++)
target_compile_definitions(libc++ PRIVATE
    # crt
    __STDC_LIMIT_MACROS
    __STDC_CONSTANT_MACROS
    # libc++
    _LIBCPP_NATIVE_C_INCLUDE_PATH=${REACTOS_SOURCE_DIR}/sdk/include/crt
    _LIBCPP_BUILDING_LIBRARY
    _LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS)

target_include_directories(libc++ INTERFACE
    "$<$<COMPILE_LANGUAGE:CXX>:${REACTOS_SOURCE_DIR}/sdk/include/libc++>")
target_compile_definitions(libc++ INTERFACE
    "$<$<COMPILE_LANGUAGE:CXX>:_LIBCPP_NATIVE_C_INCLUDE_PATH=${REACTOS_SOURCE_DIR}/sdk/include/crt>")

set_target_properties(libc++ PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED TRUE
    CXX_EXTENSIONS FALSE) 
set_target_cpp_properties(libc++ WITH_EXCEPTIONS WITH_RTTI)
