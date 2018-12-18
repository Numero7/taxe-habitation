cmake_minimum_required(VERSION 2.8.3)
project(thc)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -std=c++11 -Wno-reorder")


###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
    .
    ${CMAKE_PROJECT_DIR}
)

# Directories containing sources files
# Build ALL_SOURCES
set (SOURCES
	TH-7KARC.C
	TH-7KBNC.C
	TH-7KCAC.C
	TH-7KCOC.C
	TH-7KCVC.C
	TH-7KDEC.C
	TH-7KDNC.C
	TH-7KRAC.C
	TH-7KREC.C
	TH-7KSEC.C
	TH-7KSFC.C
	TH-7KTAC.C
	TH-7KTVC.C
	TH-7KVLC.C
	th-7ktos.h
    th-7kfos.h
    th-7ksts.h
)

# Declare a C++ library
add_library(thclib
  ${SOURCES}
  )

add_definitions( -DILIAD)

## Common generic program

macro(add_ex arg)
	  message("adding executable ${arg}")
	add_executable(${arg} ${arg}.cpp)
	target_link_libraries(${arg} thclib)
endmacro()

add_ex(arrondi_discutable)
