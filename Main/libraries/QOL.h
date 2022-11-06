#pragma once
#include <string>

namespace consts {
	const std::string path = "./";
	const std::string unk = "unknown";
}

namespace args {
	bool arguments = false;

	void setArgs(int argc) {
		if (argc > 1) arguments = true;
	}

	bool args() {
		return arguments;
	}
}