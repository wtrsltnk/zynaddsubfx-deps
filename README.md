zynaddsubfx-deps
================

Dependancy files for compiling ZynAddSubFx on windows

32 bit dependancies are build with Visual Studio 2012(Express). All are Release builds

Portaudio:
  - http://www.portaudio.com/download.html
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
  - http://cs.du.edu/~mitchell/pthreads_compiled.zip
  - extract the zip to pthreads_compiled
  - copy all pthreads_compiled\include\*.h files to include folder
  - copy all pthreads_compiled\*.lib files to lib folder
  - copy all pthreads_compiled\*.dll files to bin folder

FFTW:
  - http://www.fftw.org/install/windows.html
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
  - http://www.msweet.org/downloads.php?L+Z3
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
  - http://www.fltk.org/software.php
  - download the source package for the latest version
  - extract the package which creates fltk-1.3.3
  - create build folder next to it: fltk-1.3.3-build
  - open commandline window into fltk-1.3.3-build
  - run: cmake -G "Visual Studio 11" ..\fltk-1.3.3
  - open the created FLTK.sln
  - select the Release build
  - build everything
  - copy all fltk-1.3.3\FL\*.h files to include\FL folder
  - copy all fltk-1.3.3-build\lib\Release\*.lib files to lib folder
  - copy all fltk-1.3.3-build\bin\Release\*.dll files to bin folder
  - copy all fltk-1.3.3-build\bin\Release\*.exe files to bin folder
