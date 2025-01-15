

# This project will output and executable
add_library(adapterPattern STATIC)

target_sources(adapterPattern PRIVATE Socket.cpp)
target_sources(adapterPattern PRIVATE Volt.cpp)
target_sources(adapterPattern PRIVATE SocketClassAdapterImpl.cpp)
target_sources(adapterPattern PRIVATE SocketObjectAdapterImpl.cpp)
target_sources(adapterPattern PRIVATE TestAdapterPattern.cpp)

target_include_directories(adapterPattern PUBLIC "include")

add_subdirectory(test)
