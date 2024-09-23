package com.company;

public class cwh_40_AccessModifier {
    class MyEmployee {
        private int id;
        private String name;

        public String getName() {
            return name;
        }

        public void setName(String n) {
            name = n;
        }

        public void setId(int i) {
            id = i;
        }

        public int getId() {
            return id;
        }

    }

    public static void main(String[] args) {
        MyEmployee anshu = new MyEmployee();
        anshu.setName("Engineering student");
        System.out.println(anshu.getName());
    }
}
