//Includes
#include 	"Button.h"				//Own functions definition

Button::Button() {
	
}

//Destructor, free all the resources.
Button::~Button() {
	
	//Free resources
	delete image;
	delete image_over;
}

//Verifies if the given coordinates are in the button area.
bool Button::Over(int param_x, int param_y) {
	
	return	((param_x >= x) &&
	 		 (param_y >= y) &&
	 		 (param_x <= (x + image->w)) &&
	 		 (param_y <= (y + image->h)));
}
