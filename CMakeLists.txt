cmake_minimum_required(VERSION 2.6)
project(GamerTop)
find_package(X11 REQUIRED)

message(STATUS "X11_FOUND = ${X11_FOUND}")
message(STATUS "X11_INCLUDE_DIR = ${X11_INCLUDE_DIR}")
message(STATUS "X11_LIBRARIES = ${X11_LIBRARIES}")

set(CMAKE_CXX_STANDARD 11)
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${X11_INCLUDE_DIR})
link_directories(${X11_LIBRARIES})

file(GLOB all_SRCS
	"${PROJECT_SOURCE_DIR}/source/*.cpp"
)

add_executable(GamerTop ${all_SRCS})
target_link_libraries(GamerTop ${X11_LIBRARIES} ${X11_Xi_LIB})
