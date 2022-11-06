#pragma once

#include "../QOL.h"
#include <string>
#include <fstream>

namespace Files {

	class File {
	protected:
		std::string name;
		std::fstream file;

	public:
		
		File() {}

		File(
			std::string name
		) {
			if (name != "")
				this->name = name;
			if (name != "" && !this->file) 
				this->file.open(consts::path + name);

		}		

		~File(
		) {
			this->name = "";
			if (this->file)
				this->file.close();
		}

		std::string getName(
		) {
			return this->name;
		}

		void setName(
			std::string name
		) {
			if (name != "")
				this->name = name;
		}

		std::fstream* getFile(
		) {
			return &(this->file);
		}

		bool getStatus(
		) {
			if (this->file)
				return true;
			else
				return false;
		}

	};
}