cmake_minimum_required(VERSION 3.10)
project(primality VERSION 1.0.0)

add_library(primality src/primality.cpp)
target_include_directories(primality PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

install(TARGETS primality EXPORT primality-targets)
install(EXPORT primality-targets
    FILE primality-config.cmake
    NAMESPACE primality::
    DESTINATION lib/cmake/primality)
install(DIRECTORY include/ DESTINATION include)

include(CPack)
