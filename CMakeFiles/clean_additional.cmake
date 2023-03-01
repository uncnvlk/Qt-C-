# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/iasu_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/iasu_autogen.dir/ParseCache.txt"
  "iasu_autogen"
  )
endif()
