#include "Device.h"
#include <string.h>
#include <iostream>
/*
	this function is intiating the variables
	input: the name of the network and the minimal age for it
	output: none
*/
void Device::init(unsigned int id, DeviceType type, std::string os)
{
	this->ID = id;
	this->Type = type;
	this->OS = os;
	this->activated = true;
}
/*
	this function is giving the id
	input: none
	output: the id
*/
unsigned int Device::getID() const
{
	return this->ID;
}
/*
	this function is giving the type
	input: none
	output: the type
*/
DeviceType Device::getType() const
{
	return this->Type;
}
/*
	this function is giving the os
	input: none
	output: the os
*/
std::string Device::getOS() const
{
	return this->OS;
}
/*
	this function is checking if the device is active
	input: none
	output: is active
*/
bool Device::isActive() const
{
	return this->activated;
}
/*
	this function is activating the device
	input: none
	output: none
*/
void Device::activate()
{
	this->activated = true;
}
/*
	this function is deactivating the device
	input: none
	output: none
*/
void Device::deactivate()
{
	this->activated = false;
}