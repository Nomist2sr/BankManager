#include <string>
#include <iostream>
#include "Actor.hpp"


using namespace std;

//Impl�mentation pour la classe Actor

//CONSTRUCTEUR

Actor::Actor(string name, string firstname, string adress)
{
	this->name = name;
	this->firstname = firstname;
	this->adress = adress;

}

Actor::~Actor() {};


//GETTER
string Actor::getName() const
{
	return this->name;

}

string Actor::getFirstname() const
{
	return this->firstname;

}

string Actor::getAdress() const
{
	return this->adress;

}

//SETTER

void Actor::setName(string const name)
{
	this->name = name;
}

void Actor::setFirstname(string const firstname )
{
	this->firstname = firstname;
}

void Actor::setAdress(string const adress)
{
	this->adress = adress;
}