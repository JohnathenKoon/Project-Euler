# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\jfkoo\Documents\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\jfkoo\Documents\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\problem_2_even_fibonacci_numbers.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\problem_2_even_fibonacci_numbers.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\problem_2_even_fibonacci_numbers.dir\flags.make

CMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.obj: CMakeFiles\problem_2_even_fibonacci_numbers.dir\flags.make
CMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/problem_2_even_fibonacci_numbers.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.obj /FdCMakeFiles\problem_2_even_fibonacci_numbers.dir\ /FS -c "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\main.cpp"
<<

CMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/problem_2_even_fibonacci_numbers.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\main.cpp"
<<

CMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/problem_2_even_fibonacci_numbers.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.s /c "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\main.cpp"
<<

# Object files for target problem_2_even_fibonacci_numbers
problem_2_even_fibonacci_numbers_OBJECTS = \
"CMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.obj"

# External object files for target problem_2_even_fibonacci_numbers
problem_2_even_fibonacci_numbers_EXTERNAL_OBJECTS =

problem_2_even_fibonacci_numbers.exe: CMakeFiles\problem_2_even_fibonacci_numbers.dir\main.cpp.obj
problem_2_even_fibonacci_numbers.exe: CMakeFiles\problem_2_even_fibonacci_numbers.dir\build.make
problem_2_even_fibonacci_numbers.exe: CMakeFiles\problem_2_even_fibonacci_numbers.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable problem_2_even_fibonacci_numbers.exe"
	"C:\Users\jfkoo\Documents\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\problem_2_even_fibonacci_numbers.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\problem_2_even_fibonacci_numbers.dir\objects1.rsp @<<
 /out:problem_2_even_fibonacci_numbers.exe /implib:problem_2_even_fibonacci_numbers.lib /pdb:"C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\cmake-build-debug\problem_2_even_fibonacci_numbers.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\problem_2_even_fibonacci_numbers.dir\build: problem_2_even_fibonacci_numbers.exe

.PHONY : CMakeFiles\problem_2_even_fibonacci_numbers.dir\build

CMakeFiles\problem_2_even_fibonacci_numbers.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\problem_2_even_fibonacci_numbers.dir\cmake_clean.cmake
.PHONY : CMakeFiles\problem_2_even_fibonacci_numbers.dir\clean

CMakeFiles\problem_2_even_fibonacci_numbers.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers" "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers" "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\cmake-build-debug" "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\cmake-build-debug" "C:\Users\jfkoo\CLionProjects\Project Euler\problem 2 even fibonacci numbers\cmake-build-debug\CMakeFiles\problem_2_even_fibonacci_numbers.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\problem_2_even_fibonacci_numbers.dir\depend

