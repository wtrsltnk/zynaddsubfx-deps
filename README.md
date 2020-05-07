zynaddsubfx-deps
================

Dependancy files for compiling ZynAddSubFx on windows

32bit Visual Studio 2019

GLFW

- cmake -G "Visual Studio 16 2019" -A Win32 <c:\path\to\glfw\source> -DCMAKE_INSTALL_PREFIX=C:\Code\synthdev\zynaddsubfx-deps\vs2019-32bit

32 bit dependancies are build with Visual Studio 2012(Express). All are Release builds

Portaudio:

- [portaudio.com/download](http://www.portaudio.com/download.html)
- extract tar.gz
- create portaudio-build folder next to portaudio folder
- open cmd in portaudio-build
- cmake -G "Visual Studio 11" ..\portaudio -DPA_WDMKS_NO_KSGUID_LIB=ON
- open portaudio.sln with visual studio 2012
- select the Release build
- in VS2012, open the file portaudio\os\win\pa_win_wdmks_utils.c
- comment out the following line: #pragma comment( lib, "ksguid.lib" )
- and save the file
- build portaudio
- copy all portaudio\include\*.h files to include folder
- copy all portaudio-build\Release\*.lib files to lib folder
- copy all portaudio-build\Release\*.dll files to bin folder

pthread:

- [cs.du.edu/~mitchell/pthreads_compiled.zip](http://cs.du.edu/~mitchell/pthreads_compiled.zip)
- extract the zip to pthreads_compiled
- copy all pthreads_compiled\include\*.h files to include folder
- copy all pthreads_compiled\*.lib files to lib folder
- copy all pthreads_compiled\*.dll files to bin folder

FFTW:

- [fftw.org/install/windows](http://www.fftw.org/install/windows.html)
- download 32-bit version (fftw-3.3.4-dll32.zip)
- extract to fftw folder
- open visual studio command line in this folder
- run LIB on the .def files:
    lib /machine:x86 /def:libfftw3-3.def
    lib /machine:x86 /def:libfftw3f-3.def
    lib /machine:x86 /def:libfftw3l-3.def
- copy all .h files to include folder
- copy all .lib files to lib folder
- copy all .dll files to bin folder
- copy all .exe files to bin folder

MXML:

- [msweet.org/downloads](http://www.msweet.org/downloads.php?L+Z3)
- download version 2.4 sources
- extract the archive which creates folder mxml-2.4
- open the solution file in the mxml-2.4\vcnet folder
- agree to update solution and project files
- select the Release build
- build mxml1 project
- copy all mxml-2.4\mxml.h files to include folder
- copy all mxml-2.4\vcnet\*.lib files to lib folder
- copy all mxml-2.4\vcnet\*.dll files to bin folder

FLTK:

- [fltk.org/software](http://www.fltk.org/software.php)
- download the source package for the latest version
- extract the package which creates fltk-1.3.3
- create build folder next to it: fltk-1.3.3-build
- open commandline window into fltk-1.3.3-build
- generate the cmake build files: ``cmake ..\``
- use the option  ``-G "Visual Studio 11"`` when compiling for windows and ``-G "MinGW Makefiles"`` when compiling for MinGW
- build with: ``cmake --build . --target all``
- install with: ``cmake --install . --prefix C:\Code\synthdev\zynaddsubfx-deps\mingw-64bit``

ZLIB:

- [sourceforge.net/projects/gnuwin32/files/zlib/1.1.4](http://sourceforge.net/projects/gnuwin32/files/zlib/1.1.4/)
- download zlib-1.1.4-bin.zip
- extract the package which creates zlib-1.1.4-bin
- open visual studio command line in this folder
- run LIB on the .def file:
    lib /machine:x86 /def:zlib.def
- copy all .lib files to lib folder
- copy zlib.dll files to bin folder

GLM:

- [github.com/g-truc/glm/releases](https://github.com/g-truc/glm/releases/)
- download latest release (0.9.9.3 at this moment)
- extract zip file and open a ``cmd`` inside this folder
- create build folder with ``mkdir build`` and go into that ``cd build``
- make sure the correct compiler is added to your path. If not do it temporary by running the  following command :
  ``set "PATH=C:\path\to\your\compiler\;%PATH%"``
- for mingw-32 run cmake: ``cmake -G "MinGW Makefiles" .. -DCMAKE_INSTALL_PREFIX:PATH=C:\path\to\subfolder\of\this\repo``
- run cmake to compile: ``cmake --build . --target all``
- run cmake to install: ``cmake --build . --target install``

GLFW:

- [github.com/glfw/glfw/releases](https://github.com/glfw/glfw/releases/)
- download latest release (3.2.1 at this moment)
- extract zip file and open a ``cmd`` inside this folder
- create build folder with ``mkdir build`` and go into that ``cd build``
- make sure the correct compiler is added to your path. If not do it temporary by running the  following command :
  ``set "PATH=C:\path\to\your\compiler\;%PATH%"``
- for mingw-32 run cmake: ``cmake -G "MinGW Makefiles" .. -DCMAKE_INSTALL_PREFIX:PATH=C:\path\to\subfolder\of\this\repo``
- run cmake to compile: ``cmake --build . --target all``
- run cmake to install: ``cmake --build . --target install``