#include "page.h"
/*
	this function is intiating the variables
	input: none
	output: none
*/
void Page::init()
{
	this->posts = "";
	this->status = "";
}
/*
	this function is giving the posts
	input: none
	output: the posts
*/
std::string Page::getPosts() const
{
	return this->posts;
}
/*
	this function is giving the status
	input: none
	output: the status
*/
std::string Page::getStatus() const
{
	return this->status;
}
/*
	this function is clearing the page
	input: none
	output: none
*/
void Page::clearPage()
{
	this->posts = "";
}
/*
	this function is setting the status
	input: the status
	output: none
*/
void Page::setStatus(std::string status)
{
	this->status = status;
}
/*
	this function is adding a new line to the posts
	input: the new line
	output: none
*/
void Page::addLineToPosts(std::string new_line)
{
	this->posts += new_line + "\n";
}