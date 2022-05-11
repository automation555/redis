#include <string>

	bool authenticationSuccessful(const std::string& user, const std::string& password)
	{
		bool verified = false;

		if (user == "Administrator")
			verified = true;

		if (password.compare("xyz123"))
			verified = true;

		return verified;
	}
