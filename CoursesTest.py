from Courses import Courses

courseMarks = dict()
courseMarks["MT101"] = 80.0
courseMarks["CS101"] = 81.0
courseMarks["HS101"] = 82.0
courseMarks["PS101"] = 83.0

def test_averageCoursesWithNone():
    marks = Courses(courseMarks)
    classes = []
    average = marks.averageSomeCourses(classes)
    assert 0.0 == average, str(marks)

def test_averageCoursesWithAll():
    marks = Courses(courseMarks)
    classes = [
        "MT101",
        "CS101",
        "HS101",
    ]
    average = marks.averageSomeCourses(classes)
    assert 81.0 == average, str(marks)

def test_averageCoursesWithSome():
    marks = Courses(courseMarks)
    classes = [
        "CS101",
        "HS101",
        "NOT",
    ]
    average = marks.averageSomeCourses(classes)
    assert 81.5 == average, str(marks)

def test_averageCoursesWithNoMatching():
    marks = Courses(courseMarks)
    classes = [
        "NOT",
    ]
    average = marks.averageSomeCourses(classes)
    assert 0.0 == average, str(marks)

test_averageCoursesWithAll()

test_averageCoursesWithSome()

test_averageCoursesWithNoMatching()

test_averageCoursesWithNone()
