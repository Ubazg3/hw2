#include "Profile.h"
/*
	this function is intiating the variables
	input: the owner of the profile
	output: none
*/
void Profile::init(User owner)
{
	this->page.clearPage();
	this->userList.clear();
	this->user = owner;
}
/*
	this function is clearing the memory
	input: none
	output: none
*/
void  Profile::clear()
{
	this->page.clearPage();
	this->userList.clear();
}
/*
	this function is giving the owner
	input: none
	output: the owner
*/
User  Profile::getOwner() const
{
	return this->user;
}
/*
	this function is setting the status by given status
	input: none
	output: none
*/
void  Profile::setStatus(std::string new_status)
{
	this->page.setStatus(new_status);
}
/*
	this function is adding a post to the profile page
	input: post
	output: none
*/
void  Profile::addPostToProfilePage(std::string post)
{
	this->page.addLineToPosts(post);
}
/*
	this function is adding a friend to the profile page
	input: friend
	output: none
*/
void  Profile::addFriend(User friend_to_add)
{
	this->userList.add(friend_to_add);
}
/*
	this function is returning the page
	input: none
	output: the page
*/
std::string  Profile::getPage() const
{
	std::string result = "";
	result = "Status: " + this->page.getStatus() + "\n";
	result += "*******************\n";
	result += "*******************\n";
	result += this->page.getPosts();
	return result;
}
/*
	this function is giving the friends
	input: none
	output: the friends
*/
std::string  Profile::getFriends() const
{
	std::string result = "";
	UserNode* curr = this->userList.get_first();
	while (curr)
	{
		result += curr->get_data().getUserName();
		curr = curr->get_next();
		if (curr)
		{
			result += ",";
		}
	}
	return result;
}
/*
	this function is giving the friends with the same name length
	input: none
	output: the friends with the same name length
*/
std::string  Profile::getFriendsWithSameNameLength() const
{
	std::string result = "";
	UserNode* curr = this->userList.get_first();
	while (curr)
	{
		if (curr->get_data().getUserName().length() == this->user.getUserName().length())
		{
			result += curr->get_data().getUserName();
			curr = curr->get_next();
			if (curr->get_data().getUserName().length() == this->user.getUserName().length())
			{
				result += ",";
			}
		}
		else
		{
			curr = curr->get_next();
		}
	}
	return result;
}