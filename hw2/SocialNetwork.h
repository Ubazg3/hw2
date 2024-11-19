#include "ProfileList.h"
#include <iostream>
class SocialNetwork
{
private:
	int minAge;
	std::string networkName;
	ProfileList profiles;
public:
	void init(std::string networkName, int minAge);
	void clear();
	std::string getNetworkName() const;
	bool addProfile(Profile profile_to_add);
	std::string getWindowsDevices();
	int getMinAge() const;
};