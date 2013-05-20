

project ("Test_clew")

	language "C++"
			
	kind "ConsoleApp"
	targetdir "../bin"
	includedirs {"."}
	
	if os.is("Windows") then 
		defines { "WIN32" }
		links {"Ws2_32","Winmm"}
	end
	if os.is("Linux") then
		links {"dl"}
	end
	if os.is("MacOSX") then
	end		
		
	
	files {
		"clewTest.cpp",
		"clew.c",
		"clew.h"
	}

