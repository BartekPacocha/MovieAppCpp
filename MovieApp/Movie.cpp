#include "pch.h"
#include "Movie.h"

Movie::Movie(string t, string d) {
	this->SetTitle(t);
	this->SetDate(d);
}

Movie::~Movie()
{
}
