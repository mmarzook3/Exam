#pragma once
#include<string>
#include<vector>

using namespace std;

class NewsArticle
{
private:
	string headline;
	vector<string> keywords;
	time_t publishDate;
	unsigned likes;
	unsigned dislikes;
	bool commentsAllowed;
	string comments;

public:
	NewsArticle();
	~NewsArticle();
	time_t getPublishdate();
	void addKeyword(string keyword);
	void edit();
	void publish();
	void readHeadline();
	void thubsUpVote();
	void thumbsDownVote();
	void allowComments();
	void disallowComments();
	void addComment(string newComment);
};

