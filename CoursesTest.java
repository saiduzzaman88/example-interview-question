import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

import static org.junit.jupiter.api.Assertions.*;

class CoursesTest {

    private static Map<String, Double> courseMarks;

    @BeforeAll
    static public void init() {
        courseMarks = new HashMap<>();
        courseMarks.put( "MT101", 80.0 );
        courseMarks.put( "CS101", 81.0 );
        courseMarks.put( "HS101", 82.0 );
        courseMarks.put( "PS101", 83.0 );
    }

    @Test
    public void averageCourses_withNone() {
        Courses marks = new Courses( courseMarks );
        Set<String> courses = new HashSet<>();
        double avg = marks.averageSomeCourses( courses );
        assertEquals( 0.0, avg, 0.001 );
    }

    @Test
    public void averageCourses_withAll() {
        Courses marks = new Courses( courseMarks );
        Set<String> courses = new HashSet<>();
        courses.add( "MT101" );
        courses.add( "CS101" );
        courses.add( "HS101" );
        double avg = marks.averageSomeCourses( courses );
        assertEquals( 81.0, avg, 0.001 );
    }

    @Test
    public void averageCourses_withSome() {
        Courses marks = new Courses( courseMarks );
        Set<String> courses = new HashSet<>();
        courses.add( "CS101" );
        courses.add( "HS101" );
        courses.add( "NOT" );
        double avg = marks.averageSomeCourses( courses );
        assertEquals( 81.5, avg, 0.001 );
    }

    @Test
    public void averageCourses_noMatching() {
        Courses marks = new Courses( courseMarks );
        Set<String> courses = new HashSet<>();
        courses.add( "NOT" );
        double avg = marks.averageSomeCourses( courses );
        assertEquals( 0.0, avg, 0.001 );
    }

}