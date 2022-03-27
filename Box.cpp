#include "box.h"

// Implement setters and getters
void Box::setdetails (int len , int wid ,int hei){
  length = len ;
  width = wid ;
  height = hei ;
}
int Box::getHeight(){
return  length;
}
int Box::getLength(){
return  width;
  }
int Box::getWidth(){
return  height;
  }




// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length* width * height ;
}
