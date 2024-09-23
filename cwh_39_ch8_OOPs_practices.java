public class cwh_39_ch8_OOPs_practices {
    class Employee {
        int salary;
        String name;

        public int getSalary() {
            return salary;
        }

        public String getName() {
            return name;
        }

        public void setName(String n) {
            name = n;

        }
    }

    public static void main(String[] args) {
        Employee Anshu = new Employee();
        Anshu.setName("i am a engineer");
        Anshu.salary = 500;
        System.out.println(Anshu.getSalary());
        System.out.println(Anshu.getName());

    }

}
