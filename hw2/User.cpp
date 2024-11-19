#include "User.h"
#include <string.h>
#include <iostream>
/*
    this function is intiating the variables
    input: id of the person and his username and his age
    output: none
*/
void User::init(unsigned int id, std::string username, unsigned int age)
{
	this->id = id;
	this->username = username;
	this->age = age;
    this->Devices.clear();
}
/*
    this function is clearing the memory
    input: none
    output: none
*/
void User::clear()
{
    this->Devices.clear();
}
/*
    this function is giving the id
    input: none
    output: the id
*/
unsigned int User::getID() const
{
	return this->id;
}
/*
    this function is giving the username 
    input: none
    output: the username
*/
std::string User::getUserName() const
{
	return this->username;
}
/*
    this function is giving the age
    input: none
    output: the age
*/
unsigned int User::getAge() const
{
	return this->age;
}
/*
    this function is giving the devices
    input: none
    output: the devices
*/
DevicesList& User::getDevices() 
{
	return this->Devices;
}
/*
    this function adding a device to the network
    input: new device
    output: none
*/
void User::addDevice(Device newDevice)
{
	this->Devices.add(newDevice);
}
/*
    this function is checking if the devices are on
    input: none
    output: is the divices on
*/
bool User::checkIfDevicesAreOn() const
{
    DeviceNode* curr = this->Devices.get_first();
    bool flag = true;
    while (curr)
    {
        if (!curr->get_data().isActive())
        {
            flag = false;
        }
        curr = curr->get_next();
    }
    return flag;
}