# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lj/revolve

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lj/revolve/build

# Include any dependencies generated for this target.
include cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/compiler_depend.make

# Include the progress variables for this target.
include cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/flags.make

cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o: cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/flags.make
cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o: ../cpprevolve/revolve/gazebo/plugin/TorusWorld.cpp
cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o: cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lj/revolve/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o"
	cd /Users/lj/revolve/build/cpprevolve/revolve/gazebo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o -MF CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o.d -o CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o -c /Users/lj/revolve/cpprevolve/revolve/gazebo/plugin/TorusWorld.cpp

cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.i"
	cd /Users/lj/revolve/build/cpprevolve/revolve/gazebo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lj/revolve/cpprevolve/revolve/gazebo/plugin/TorusWorld.cpp > CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.i

cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.s"
	cd /Users/lj/revolve/build/cpprevolve/revolve/gazebo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lj/revolve/cpprevolve/revolve/gazebo/plugin/TorusWorld.cpp -o CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.s

cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o: cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/flags.make
cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o: ../cpprevolve/revolve/gazebo/plugin/register_torus_world_plugin.cpp
cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o: cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lj/revolve/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o"
	cd /Users/lj/revolve/build/cpprevolve/revolve/gazebo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o -MF CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o.d -o CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o -c /Users/lj/revolve/cpprevolve/revolve/gazebo/plugin/register_torus_world_plugin.cpp

cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.i"
	cd /Users/lj/revolve/build/cpprevolve/revolve/gazebo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lj/revolve/cpprevolve/revolve/gazebo/plugin/register_torus_world_plugin.cpp > CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.i

cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.s"
	cd /Users/lj/revolve/build/cpprevolve/revolve/gazebo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lj/revolve/cpprevolve/revolve/gazebo/plugin/register_torus_world_plugin.cpp -o CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.s

# Object files for target TorusWorldPlugin
TorusWorldPlugin_OBJECTS = \
"CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o" \
"CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o"

# External object files for target TorusWorldPlugin
TorusWorldPlugin_EXTERNAL_OBJECTS =

lib/libTorusWorldPlugin.dylib: cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/TorusWorld.cpp.o
lib/libTorusWorldPlugin.dylib: cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/plugin/register_torus_world_plugin.cpp.o
lib/libTorusWorldPlugin.dylib: cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/build.make
lib/libTorusWorldPlugin.dylib: lib/librevolve-gazebo.a
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libSimTKsimbody.3.7.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libdart.6.11.0.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_client.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_gui.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_sensors.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_rendering.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_physics.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_ode.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_transport.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_msgs.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_util.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_common.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_gimpact.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_opcode.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libgazebo_opende_ou.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libboost_system-mt.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libboost_filesystem-mt.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libboost_program_options-mt.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libboost_regex-mt.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libboost_iostreams-mt.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libprotobuf.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libsdformat9.9.5.0.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/Cellar/ogre1.9/1.9-20160714-108ab0bcc69603dba32c0ffd4bbbc39051f421c9_9/lib/libOgreMain.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libboost_thread-mt.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libboost_date_time-mt.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/Cellar/ogre1.9/1.9-20160714-108ab0bcc69603dba32c0ffd4bbbc39051f421c9_9/lib/libOgreTerrain.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/Cellar/ogre1.9/1.9-20160714-108ab0bcc69603dba32c0ffd4bbbc39051f421c9_9/lib/libOgrePaging.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libignition-common3-graphics.3.13.2.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libSimTKmath.3.7.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libSimTKcommon.3.7.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libdart-external-odelcpsolver.6.11.0.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libccd.2.0.dylib
lib/libTorusWorldPlugin.dylib: /Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/lib/libm.tbd
lib/libTorusWorldPlugin.dylib: /usr/local/Cellar/fcl/0.6.1/lib/libfcl.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/Cellar/assimp/5.0.1/lib/libassimp.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/liboctomap.1.9.7.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/liboctomath.1.9.7.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libignition-transport8.8.2.0.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libignition-fuel_tools4.4.4.0.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libignition-msgs5.5.7.0.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libignition-math6.6.8.0.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libprotobuf.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libignition-common3.3.13.2.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/Cellar/gsl/2.7/lib/libgsl.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/Cellar/gsl/2.7/lib/libgslcblas.dylib
lib/libTorusWorldPlugin.dylib: /usr/local/lib/libyaml-cpp.0.6.3.dylib
lib/libTorusWorldPlugin.dylib: cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lj/revolve/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../lib/libTorusWorldPlugin.dylib"
	cd /Users/lj/revolve/build/cpprevolve/revolve/gazebo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TorusWorldPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/build: lib/libTorusWorldPlugin.dylib
.PHONY : cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/build

cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/clean:
	cd /Users/lj/revolve/build/cpprevolve/revolve/gazebo && $(CMAKE_COMMAND) -P CMakeFiles/TorusWorldPlugin.dir/cmake_clean.cmake
.PHONY : cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/clean

cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/depend:
	cd /Users/lj/revolve/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lj/revolve /Users/lj/revolve/cpprevolve/revolve/gazebo /Users/lj/revolve/build /Users/lj/revolve/build/cpprevolve/revolve/gazebo /Users/lj/revolve/build/cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cpprevolve/revolve/gazebo/CMakeFiles/TorusWorldPlugin.dir/depend

