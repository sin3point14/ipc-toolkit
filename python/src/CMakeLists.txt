set(SOURCES
  bindings.cpp
  collision_mesh.cpp
  ipc.cpp
)

target_sources(ipctk PRIVATE ${SOURCES})

################################################################################
# Subfolders
################################################################################

add_subdirectory(adhesion)
add_subdirectory(barrier)
add_subdirectory(broad_phase)
add_subdirectory(candidates)
add_subdirectory(ccd)
add_subdirectory(collisions)
add_subdirectory(distance)
add_subdirectory(friction)
add_subdirectory(implicits)
add_subdirectory(potentials)
add_subdirectory(tangent)
add_subdirectory(utils)