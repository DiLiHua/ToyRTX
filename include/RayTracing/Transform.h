#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_

#include <RayTracing/Hitable.h>

namespace RayTracing {
	class Transform : public Hitable {
		HEAP_OBJ_SETUP(Transform)
	public:
		Transform(const glm::mat4 & transform, const Hitable::Ptr & hitable);

		virtual HitRst RayIn(Ray::Ptr & ray) const;
		virtual AABB GetBoundingBox() const;
	private:
		glm::mat4 transform;
		Hitable::Ptr hitable;
	};
}

#endif // !_TRANSFORM_H_
