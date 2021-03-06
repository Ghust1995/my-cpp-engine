#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "glm/vec3.hpp"
#include "glm/gtc/quaternion.hpp" 
#include "glm/gtx/quaternion.hpp" 
#include "glm/gtc/matrix_transform.hpp" 

using namespace glm;

class Transform {
public:
  Transform(vec3 position, quat rotation, vec3 scale)
      : position_(position), rotation_(rotation), scale_(scale) {}
  Transform() : Transform(vec3(0.0), quat(), vec3(1.0)) {}

  inline mat4 ToModelMatrix() {
    return glm::translate(mat4(), position_) *
           glm::toMat4(rotation_) *
           glm::scale(mat4(), scale_);
  }

  vec3 position_;
  quat rotation_;
  vec3 scale_;

private:
};

#endif

