cmake_minimum_required(VERSION 3.15)
project(WorldSim VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(SDL2 CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(yaml-cpp CONFIG REQUIRED)

file(GLOB_RECURSE SOURCES "WorldSim/src/**/*.cpp")
file(GLOB_RECURSE R_SOURCES "WorldSim/src/*.cpp")
file(GLOB_RECURSE HEADER_LIST "WorldSim/include/**/*.h")

add_executable(WorldSim ${SOURCES} ${R_SOURCES} ${HEADER_LIST})

target_include_directories(WorldSim PUBLIC src/**)

# Define where headers should be found
target_include_directories(WorldSim PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/WorldSim/include>
    $<INSTALL_INTERFACE:include>  # Used when installed
)

target_link_libraries(WorldSim PRIVATE $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main> $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>)
target_link_libraries(WorldSim PRIVATE imgui::imgui)
target_link_libraries(WorldSim PRIVATE yaml-cpp::yaml-cpp)
target_link_directories(WorldSim PUBLIC src/**)

source_group(
  TREE "${PROJECT_SOURCE_DIR}/WorldSim/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})
  