set(CMAKE_LEGACY_CYGWIN_WIN32 0)
# Add executable called "helloDemo" that is built from the source files
# "demo.c" and "demo_b.c". The extensions are automatically found.
add_executable (helloDemo demo.c )

# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# helloDemo
target_link_libraries (helloDemo LINK_PUBLIC Hello)

