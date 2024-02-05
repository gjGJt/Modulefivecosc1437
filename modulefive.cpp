 #include <iostream>
#include <string>

using namespace std;

int main()
{
    // asking the user for the first and last name
    cout << "Enter your first and last name with a space separating them: ";
    string firstlastName;

    // getting the input from that line and storing it into the named variable
    getline(cin, firstlastName);

    // using it to find the space that separates the first and last name
    size_t augmentedfullname = firstlastName.find(' ');

    // splitting the first and last name by setting the first name as the part of the string before the space
    string firstName = firstlastName.substr(0, augmentedfullname);

    // splitting the first and last name by setting the last name as the part of the string after the space (or one after the first)
    string lastName = firstlastName.substr(augmentedfullname + 1);

    // displaying the initials as specified by the previous substrings
    cout << "Your initials are: " << firstName[0] << "." << lastName[0] << "." << endl;

    // concatenating the lengths of the set substrings to create two new substrings that take both lengths and halves them; vice versa for newLastName
    string newFirstName = firstName.substr(0, firstName.length() / 2) +
                         lastName.substr(lastName.length() / 2);

    string newLastName = lastName.substr(0, lastName.length() / 2) +
                        firstName.substr(firstName.length() / 2);

    // displaying the newly formed names
    cout << "New First Name: " << newFirstName << endl;
    cout << "New Last Name: " << newLastName << endl;

    return 0;
}
