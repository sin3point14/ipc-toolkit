set(SOURCES
  # Tests
  test_adhesion_potentials.cpp
  test_barrier_potential.cpp
  test_friction_potential.cpp

  # Benchmarks

  # Utilities
)

target_sources(ipc_toolkit_tests PRIVATE ${SOURCES})

################################################################################
# Subfolders
################################################################################