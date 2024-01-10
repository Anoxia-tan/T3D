project(T3Basic)
set(INC_LIST
        inc/T3DCommon.h
        inc/T3Point2.h)
set(SRC_LIST src/T3Point3.cc)

add_library(${PROJECT_NAME} SHARED ${INC_LIST} ${SRC_LIST})