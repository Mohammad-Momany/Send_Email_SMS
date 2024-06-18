#include <iostream>

using namespace std;

class clsPerson
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;


public:
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // Read Only Property
    int ID() {
        return _ID;
    }

    // Property Set
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    // Property Get
    string FirstName() {
        return _FirstName;
    }

    // Property Set
    void setLastName(string LastName) {
        _LastName = LastName;
    }

    // Property Get
    string LastName() {
        return _LastName;
    }

    // Property Set
    void setEmail(string Email) {
        _Email = Email;
    }

    // Property Get
    string Email() {
        return _Email;
    }

    // Property Set
    void setPhone(string Phone) {
        _Phone = Phone;
    }

    // Property Get
    string Phone() {
        return _Phone;
    }

    string FullName() {
        return _FirstName + " " + _LastName;
    }

    void SendEmail(string subject, string body)
    {
        cout << "The following meassage send successfully to email: " << _Email << '\n';
        cout << "Subject: " << subject << '\n';
        cout << "Body: " << body << '\n';

    }

    void SendSms(string message)
    {
        cout << "The following SMS send successfully to phone: " << _Phone << '\n';
        cout << message << '\n';

    }

    void Print()
    {

        cout << "Info:\n";
        cout << "____________________________________\n";
        cout << "ID       :" << _ID << "\n";
        cout << "FirstName:" << _FirstName << "\n";
        cout << "LastName :" << _LastName << "\n";
        cout << "Full Name:" << FullName() << "\n";
        cout << "Email    :" << _Email << "\n";
        cout << "Phone    :" << _Phone << "\n";
        cout << "____________________________________\n\n";


    }
};

int main()
{
    clsPerson Person(1, "Mohammad", "Almomany","Test@gmail.com","00962777771293");
    Person.Print();
    Person.SendEmail("Traveling", "Let's travel to Europe");

    Person.SendSms("Hey");

    system("pause>0");

    return 0;
}
