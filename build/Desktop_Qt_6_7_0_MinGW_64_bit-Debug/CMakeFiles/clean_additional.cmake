# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\kalendarz-zadanie_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\kalendarz-zadanie_autogen.dir\\ParseCache.txt"
  "kalendarz-zadanie_autogen"
  )
endif()
