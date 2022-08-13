#include <cstdio>

/**
 * OK
 * using std::string, use only if few
 * 
 * Not OK
 * using namespace std;
 * 
 * Best
 * Refer with std::string etc.
 */


// struct is a keyword
// Student is a tag
// Implements information cohesion
struct Student{
    // Member variables AKA attributes (data part of informational cohesion)
    int id;
    const char *firstName; // member values
    const char *lastName; // member values

    // Member function AKA methods (operations part of informational cohesion)
    void dump()
    {
        printf("%-8d%s %s\n", id, firstName, lastName);
    }
};

/**
 * s1, s2 are "instances" of the "type" struct Student.
 * You can have any number of instances for one type.
 */

int main() // int is a type
{
    //Method 1 to initialize
    Student s1 = {534213, "Jimmy", "Fallon"};
    s1.dump();

    //Method 2, initializing using dot notation
    Student s2;
    s2.id = 332786; 
    s2.firstName = "Lisa";
    s2.lastName = "Connolly";
    s2.dump();

    // Pointer to struct, access using arrow notation 
    Student *s2p = &s2;
    s2p -> lastName = "Page";
    s2.dump();
}