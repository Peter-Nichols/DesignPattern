
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

# This project will output and executable
add_library(adapterPattern STATIC
    Socket.cpp
    Volt.cpp
    SocketClassAdapterImpl.cpp
    SocketObjectAdapterImpl.cpp
    TestAdapterPattern.cpp
    )
