# Here we find a typical ROS description package, this set the MC_UR3E_DESCRIPTION_PATH CMake variable
find_description_package(mc_ur3e_description)
if(EXISTS "${MC_UR3E_DESCRIPTION_PATH}/share/mc_ur3e_description")
  set(MC_UR3E_DESCRIPTION_PATH "${MC_UR3E_DESCRIPTION_PATH}/share/mc_ur3e_description")
endif()

# Generate the robot module C++ code using this value
configure_file(ur3e.in.cpp "${CMAKE_CURRENT_BINARY_DIR}/ur3e.cpp")

set(ur3e_SRC
  "${CMAKE_CURRENT_BINARY_DIR}/ur3e.cpp"
)
set(ur3e_HDR
  ur3e.h
)

add_robot(ur3e ${ur3e_SRC} ${ur3e_HDR})
target_include_directories(ur3e PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
