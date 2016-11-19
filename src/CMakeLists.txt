add_subdirectory(cpu)
add_subdirectory(mmu)
set(SOURCE
    ${SOURCE}
    ${CMAKE_CURRENT_SOURCE_DIR}/main.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gameboy.c
    PARENT_SCOPE
)

set(HEADER
    ${HEADER}
    ${CMAKE_CURRENT_SOURCE_DIR}/gameboy.h
    PARENT_SCOPE
)
