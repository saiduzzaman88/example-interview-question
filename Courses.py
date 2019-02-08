class Courses:
    def __init__(self, courseMarks):
        self.__courseMarks = courseMarks

    # courseName: a list of courses
    def averageSomeCourses(self, courseNames):
        """
        :param courseNames: List of Strings
        :return: double
        """
        # Complete this method
        return 0


    def __str__(self):
        str = "Courses: "
        for courseName, courseMark in self.__courseMarks.items():
            str += "%s: %.2f, " % (courseName, courseMark)
        return str

