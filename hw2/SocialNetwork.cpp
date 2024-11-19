#include "SocialNetwork.h"
/*
    this function is intiating the variables
    input: the name of the network and the minimal age for it
    output: none
*/
void SocialNetwork::init(std::string networkName, int minAge)
{
	this->networkName =networkName;
	this->minAge = minAge;
	this->profiles.clear();

}
/*
    this function is clearing the memory
    input: none
    output: none
*/
void SocialNetwork::clear()
{
	this->profiles.clear();
}
/*
    this function is giving the name of the network
    input: none
    output: the name of the network
*/
std::string SocialNetwork::getNetworkName() const
{
	return this->networkName;
}
/*
    this function is giving the minimum age for the network
    input: none
    output: the minimum age
*/
int SocialNetwork::getMinAge() const
{
    return this->minAge;
}
/*
    this function is adding a profile to the network
    input: the profile to add
    output: is the profile added
*/
bool SocialNetwork::addProfile(Profile profile_to_add)
{
	this->profiles.add(profile_to_add);
    if (this->profiles.add(profile_to_add))
    {
        return true;
    }
    return false;
}
/*
    this function is giving all the people that has window device
    input: none
    output: all the people that has window device
*/
std::string SocialNetwork::getWindowsDevices()
{
    std::string result = "";
    ProfileNode* currProfileNode = this->profiles.get_first();

    while (currProfileNode)
    {
        User owner = currProfileNode->get_data().getOwner();
        DeviceNode* currDeviceNode = owner.getDevices().get_first();
        while (currDeviceNode)
        {
            const Device& device = currDeviceNode->get_data();
            unsigned int deviceID = device.getID();
            std::string os = device.getOS();
            if (os == WINDOWS7 || os == WINDOWS10 || os == WINDOWS11)
            {
                std::string deviceString = "[" + std::to_string(deviceID) + ", " + os + "]";
                if (result.find(deviceString) == std::string::npos)
                {
                    if (!result.empty())
                    {
                        result += ", ";
                    }
                    result += deviceString;
                }
            }
            currDeviceNode = currDeviceNode->get_next();
        }
        currProfileNode = currProfileNode->get_next();
    }
    return result;
}