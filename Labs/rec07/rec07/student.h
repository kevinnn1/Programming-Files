#ifndef STUDENT_H
#define STUDENT_H

#include "course.h";
#include <iostream>
#include <string>
#include <vector>

namespace BrooklynPoly {
	class Student {
		friend std::ostream& operator<<(std::ostream& os, const Student& rhs);
	public:
		// Student methods needed by Registrar
		Student(const std::string& name);
		const std::string& getName() const;
		bool addCourse(Course*);

		// Student method needed by Course
		void removedFromCourse(Course*);

	private:
		std::string name;
		std::vector<Course*> courses;
	};
}
#endif
