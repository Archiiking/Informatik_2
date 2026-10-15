#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    virtual ~Person() = default;

    virtual void introduce() const {
        std::cout << "Name: " << name << ", Age: " << age << '\n';
    }
};

class Student : public Person {
private:
    std::string major;

public:
    Student(const std::string& name, int age, const std::string& major)
        : Person(name, age), major(major) {}

    void introduce() const override {
        Person::introduce();
        std::cout << "Major: " << major << '\n';
    }
};

int main() {
    Person person("YourName", 20);
    Student student("StudentName", 19, "Computer Science");

    person.introduce();
    student.introduce();

    return 0;
}
