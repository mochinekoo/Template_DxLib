#include "DrawBase.h"

DrawBase::DrawBase(std::string name_, float width_, float height_, unsigned int color_, Location postion_, Vector3D vector_)
 : name(name_), width(width_), height(height_), color(color_), vector(vector_), postion(postion_), customData(0){
}

DrawBase::~DrawBase()
{
}