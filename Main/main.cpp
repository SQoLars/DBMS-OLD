//
//		SQoLars: DBMS
//		-> A light sqlite-like database management system.
//
//		Project realised by students:
//			Simion Cristina Florentina
//			Toma Andreea
//			Vlad Liviu Alexandru
//			Vlad Rares
//		- ASE CSIE I.E. Eng G 1068
//
//		Repository:
//		https://github.com/SQoLars/DBMS
//
//		Documentation:
//		https://github.com/SQoLars/DBMS#readme
//
//		Sections: (ctrl+f)
//			INCLUDE BLOCK
//			MAIN BLOCK


//=============== INCLUDE BLOCK ===============
#include "libraries/files/files.h"
#include "libraries/parse/misc_parse.h"
#include <iostream>
#include <typeinfo>
#include <vector>

//=============== MAIN BLOCK ===============
int main(
	int argc,
	char* argv[]
) {
	args::setArgs(argc);
	std::string current_exec_name = argv[0]; // Name of the current exec program
	std::vector<std::string> all_args;
	all_args.assign(argv, argv + argc);
	
}

