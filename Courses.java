import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collector;
import java.util.stream.Collectors;

public class Courses {

    // Map of course names and marks
    private Map<String, Double> courseMarks;

    public Courses(Map<String, Double> courseMarks) {
        this.courseMarks = new HashMap<>(courseMarks);
    }

    // Return the average marks in the given courses
    public double averageSomeCourses(Set<String> courseNames) {
        // Complete this method
        Double totalMarks = 0.0;
        double avgMarks = 0.0;
        int count = 0;
         Iterator iterator = courseNames.iterator();
        while(iterator.hasNext()){
            String elem = (String) iterator.next();
            totalMarks += this.courseMarks.get(elem);
            count++;
        }
        avgMarks = totalMarks / Double.valueOf(count);
        return avgMarks;
    }

    public void print() {
        System.out.print("Courses: ");
        for (Map.Entry<String, Double> entry : courseMarks.entrySet()) {
            System.out.printf("%s: %.2f, ", entry.getKey(), entry.getValue());
        }
        System.out.println("");
    }

}
