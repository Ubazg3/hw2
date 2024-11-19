#include <string.h>
#include "UserList.h"
#include "page.h"
#include <iostream>
class Profile
{
private:
	User user;
	Page page;
	UserList userList;
public:
	void init(User owner);
	void clear();
	User getOwner() const;
	void setStatus(std::string new_status);
	void addPostToProfilePage(std::string post);
	void addFriend(User friend_to_add);
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;
};