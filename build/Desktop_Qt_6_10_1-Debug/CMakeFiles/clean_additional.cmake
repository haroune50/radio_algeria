# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Radio_Algeria_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Radio_Algeria_autogen.dir/ParseCache.txt"
  "Radio_Algeria_autogen"
  )
endif()
