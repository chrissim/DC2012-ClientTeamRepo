#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_

#include "Point.h"
#include <iostream>

// Abstract Base Class
class GameObject
{
	protected:
		int GObjID_;
		int direction; // in degrees
		Point pos_;

	public:
		// constructor
		// explicit to indicate no implicit conversion
		explicit GameObject(int GObjID = 0,
							int spriteID = 0,
							int posX = 0,
							int posY = 0);

		// default destructor
		virtual ~GameObject(){}

		// getters
		virtual int getGObjID() const;
		virtual int getSpriteID() const;
		virtual Point getPosition() const;

		// for testing purposes
		virtual void print(std::ostream& os) const;
};

#endif