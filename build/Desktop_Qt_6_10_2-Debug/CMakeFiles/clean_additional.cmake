# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MyDiplom_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MyDiplom_autogen.dir/ParseCache.txt"
  "MyDiplom_autogen"
  )
endif()
