
find_path(SDL2_INCLUDE_DIR SDL.h
	HINTS
	$ENV{SDL2DIR}
	PATH_SUFFIXES include/sdl2 include
)

find_library(SDL2_LIBRARY
  NAMES SDL2
  HINTS
  $ENV{SDL2DIR}
  PATH_SUFFIXES lib64 lib
)

mark_as_advanced(SDL2_INCLUDE_DIR)

set(SDL2_FOUND FALSE)

if(SDL2_INCLUDE_DIR AND SDL2_LIBRARY)
    set(SDL2_FOUND TRUE)
endif()

if(SDL2_FOUND)
    if(NOT SDL2_FIND_QUIETLY)
        message(STATUS "Found SDL2")
    endif()
else()
    if(SDL2_FIND_REQUIRED)
        message(FATAL_ERROR "Could not find SDL2")
    endif()
endif()
