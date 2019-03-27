#pragma once

#include <iostream>
#include <string> 

using namespace std;

class Movie {
public:
	string GetTitle() { return title; }
	string GetDate() { return date; }

	void SetTitle(string t) { title = t; };
	void SetDate(string d) { date = d; };

	Movie(string t, string d);

	virtual ~Movie();

private:
	string title;
	string date;
};
