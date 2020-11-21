#include <iostream>
#include <fstream>
using namespace std;


// General Functions

void clearArr(char word[]);
void toLower(char word[]);
void copyArr(char word[], char temp[]);
struct contact *regrowStruct(struct contact *list, int &size);
struct contact *shrinkStruct(struct contact *list, int &size);

// Main Menu

void main_menu(ifstream &fin, ofstream &fout, struct contact *list, int size);

// Reading / Writing Functions

void readFile(ifstream &fin, ofstream &fout, struct contact *list, int size);
void writeFile(ifstream &fin, ofstream &fout, struct contact *list, int size);

// Finding Contact(s)

void findContact(ifstream &fin, ofstream &fout, struct contact *list, int size);

void findByID(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByFirstName(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByLastName(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByMiddleName(ifstream &fin, ofstream &fout, struct contact *list, int size);

void findByHomeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByHomeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByHomeTown(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByHomeCity(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByHomePostal(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByHomeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size);

void findByOfficeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByOfficeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByOfficeTown(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByOfficeCity(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByOfficePostal(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByOfficeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size);

void findByCountryCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByCityCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByPhoneNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);

void findByCompanyCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByCellNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);

void findByEmail(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByDOB(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByHeight(ifstream &fin, ofstream &fout, struct contact *list, int size);
void findByEdu(ifstream &fin, ofstream &fout, struct contact *list, int size);

// Adding Contact(s)

void addContact(ifstream &fin, ofstream &fout, struct contact *list, int size);

// Deleting Contact(s)

void deleteContact(ifstream &fin, ofstream &fout, struct contact *list, int size);

void deleteByID(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByFirstName(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByLastName(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByMiddleName(ifstream &fin, ofstream &fout, struct contact *list, int size);

void deleteByHomeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByHomeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByHomeTown(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByHomeCity(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByHomePostal(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByHomeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size);

void deleteByOfficeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByOfficeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByOfficeTown(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByOfficeCity(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByOfficePostal(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByOfficeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByCountryCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByCityCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByPhoneNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByCompanyCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByCellNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByEmail(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByDOB(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByHeight(ifstream &fin, ofstream &fout, struct contact *list, int size);
void deleteByEdu(ifstream &fin, ofstream &fout, struct contact *list, int size);

// Modifying Contact(s)

void modifyContact(ifstream &fin, ofstream &fout, struct contact *list, int size);

void modifyByID(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByFirstName(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByLastName(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByMiddleName(ifstream &fin, ofstream &fout, struct contact *list, int size);

void modifyByHomeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByHomeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByHomeTown(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByHomeCity(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByHomePostal(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByHomeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size);

void modifyByOfficeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByOfficeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByOfficeTown(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByOfficeCity(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByOfficePostal(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByOfficeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByCountryCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByCityCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByPhoneNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByCompanyCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByCellNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByEmail(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByDOB(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByHeight(ifstream &fin, ofstream &fout, struct contact *list, int size);
void modifyByEdu(ifstream &fin, ofstream &fout, struct contact *list, int size);

// Sorting Contact(s)

void sortContact(ifstream &fin, ofstream &fout, struct contact *list, int size);

void sortByID(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByFirstName(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByLastName(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByMiddleName(ifstream &fin, ofstream &fout, struct contact *list, int size);

void sortByHomeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByHomeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByHomeTown(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByHomeCity(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByHomePostal(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByHomeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size);

void sortByOfficeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByOfficeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByOfficeTown(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByOfficeCity(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByOfficePostal(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByOfficeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByCountryCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByCityCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByPhoneNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByCompanyCode(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByCellNumber(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByEmail(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByDOB(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByHeight(ifstream &fin, ofstream &fout, struct contact *list, int size);
void sortByEdu(ifstream &fin, ofstream &fout, struct contact *list, int size);


// Output / Print Functions

void outputContact(ifstream &fin, ofstream &fout, struct contact *list, int size, int index);
void printFile(ifstream &fin, ofstream &fout, struct contact *list, int size);


struct contact {
	int id;

	char firstName[20];
	char lastName[20];
	char middleName[20];

	int home;
	int homeStreet;
	char homeTown[50];
	char homeCity[20];
	int homePostal;
	char homeCountry[20];

	int office;
	int officeStreet;
	char officeTown[50];
	char officeCity[20];
	int officePostal;
	char officeCountry[20];

	char countryCode[10];
	int cityCode;
	long long int phoneNum;

	char companyCode[10];
	long long int cellNum;

	char email[50];
	char dob[20];
	float height;
	char edu[10];
};

int main() {
	ifstream fin;
	ofstream fout;

	int size = 0;

	int intTemp = 0;
	long long int longTemp = 0;
	float floatTemp = 0.0;
	char tempChar = '\0';
	char word[20] = { '\0' };

	fin.open("contact.txt");

	if (!fin.is_open()) {
		cout << "\nFile does not exist!";
	}
	else {
		while (!fin.eof())
		{
			fin >> intTemp;

			fin >> tempChar;

			fin.ignore();

			fin.getline(word, 19, ',');
			clearArr(word);
			fin.getline(word, 19, ',');
			clearArr(word);
			fin.getline(word, 19, ',');
			clearArr(word);

			fin.ignore();

			fin >> intTemp;
			fin >> tempChar;
			fin >> intTemp;
			fin >> tempChar;
			fin.ignore();
			fin.getline(word, 49, ',');
			clearArr(word);
			fin.getline(word, 19, ',');
			clearArr(word);
			fin.ignore();
			fin >> intTemp;
			fin >> tempChar;
			fin.ignore();
			fin.getline(word, 19, ',');
			clearArr(word);
			fin.ignore();

			fin >> intTemp;
			fin >> tempChar;
			fin >> intTemp;
			fin >> tempChar;
			fin.ignore();
			fin.getline(word, 49, ',');
			clearArr(word);
			fin.getline(word, 19, ',');
			clearArr(word);
			fin.ignore();
			fin >> intTemp;
			fin >> tempChar;
			fin.ignore();
			fin.getline(word, 19, ',');
			clearArr(word);

			fin.getline(word, 9, ',');
			clearArr(word);
			fin.ignore();
			fin >> intTemp;
			fin >> tempChar;
			fin >> longTemp;
			fin >> tempChar;
			fin.ignore();

			fin.getline(word, 9, ',');
			clearArr(word);
			fin.ignore();
			fin >> longTemp;
			fin >> tempChar;
			fin.ignore();

			fin.getline(word, 49, ',');
			clearArr(word);
			fin.getline(word, 19, ',');
			clearArr(word);
			fin.ignore();

			fin >> floatTemp;
			fin >> tempChar;
			fin.ignore();
			fin.getline(word, 9, ',');
			clearArr(word);
			fin.ignore();

			size++;
		}
	}
	fin.close();

	contact *list = new contact[size];
	main_menu(fin, fout, list, size);
}

void main_menu(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char input = '\0';

	system("CLS");
	cout << "\n\t=============Contact List============";
	cout << "\n\t--------------Main Menu--------------\n";
	cout << "\n\tR - Read Contact File from File";
	cout << "\n\tF - Find Contact by Field";
	cout << "\n\tW - Write Contact List to File";
	cout << "\n\tS - Sort Contact List by Field";
	cout << "\n\tA - Add a Single Contact";
	cout << "\n\tD - Delete a Contact";
	cout << "\n\tM - Modify a Contact";
	cout << "\n\tI - Input a Contact from the Keyboard";
	cout << "\n\tO - Output a Contact to the Screen";
	cout << "\n\tP - Print Complete Contact List";
	cout << "\n\tQ - Quit Program\n";
	cout << "\n\t-------------------------------------";
	cout << "\n\t=====================================\n";

	cout << "\n\n\tEnter your choice: ";
	cin >> input;

	if (input == 'r' || input == 'R') {
		readFile(fin, fout, list, size);
	}
	else if (input == 'f' || input == 'F') {
		findContact(fin, fout, list, size);
	}
	else if (input == 'w' || input == 'W') {
		writeFile(fin, fout, list, size);
	}
	else if (input == 's' || input == 'S') {
		sortContact(fin, fout, list, size);
	}
	else if (input == 'a' || input == 'A') {
		addContact(fin, fout, list, size);
	}
	else if (input == 'd' || input == 'D') {
		deleteContact(fin, fout, list, size);
	}
	else if (input == 'm' || input == 'M') {
		modifyContact(fin, fout, list, size);
	}
	else if (input == 'i' || input == 'I') {
		addContact(fin, fout, list, size);
	}
	else if (input == 'o' || input == 'O') {
		findContact(fin, fout, list, size);
	}
	else if (input == 'p' || input == 'P') {
		printFile(fin, fout, list, size);
	}
	else if (input == 'q' || input == 'Q') {
		exit(0);
	}
	else {
		cout << "\n\tInvalid Input!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void readFile(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char tempChar;

	fin.open("contact.txt");

	if (!fin.is_open()) {
		cout << "\nFile does not exist!";
		system("PAUSE");

		main_menu(fin, fout, list, size);
	}
	else {
		for ( int i = 0; i < size; i++)	{
			fin >> list[i].id;

			fin >> tempChar;

			fin.ignore();

			fin.getline(list[i].firstName, 19, ',');
			fin.ignore();
			fin.getline(list[i].lastName, 19, ',');
			fin.ignore();
			fin.getline(list[i].middleName, 19, ',');

			fin.ignore();

			fin >> list[i].home;
			fin >> tempChar;
			fin >> list[i].homeStreet;
			fin >> tempChar;
			fin.ignore();
			fin.getline(list[i].homeTown, 49, ',');
			fin.ignore();
			fin.getline(list[i].homeCity, 19, ',');
			fin.ignore();
			fin >> list[i].homePostal;
			fin >> tempChar;
			fin.ignore();
			fin.getline(list[i].homeCountry, 19, ',');
			fin.ignore();

			fin >> list[i].office;
			fin >> tempChar;
			fin >> list[i].officeStreet;
			fin >> tempChar;
			fin.ignore();
			fin.getline(list[i].officeTown, 49, ',');
			fin.ignore();
			fin.getline(list[i].officeCity, 19, ',');
			fin.ignore();
			fin >> list[i].officePostal;
			fin >> tempChar;
			fin.ignore();
			fin.getline(list[i].officeCountry, 19, ',');
			fin.ignore();

			fin.getline(list[i].countryCode, 9, ',');
			fin.ignore();
			fin >> list[i].cityCode;
			fin >> tempChar;
			fin >> list[i].phoneNum;
			fin >> tempChar;
			fin.ignore();

			fin.getline(list[i].companyCode, 9, ',');
			fin.ignore();
			fin >> list[i].cellNum;
			fin >> tempChar;
			fin.ignore();

			fin.getline(list[i].email, 49, ',');
			fin.ignore();
			fin.getline(list[i].dob, 19, ',');
			fin.ignore();

			fin >> list[i].height;
			fin >> tempChar;
			fin.ignore();
			fin.getline(list[i].edu, 9, ',');
			fin.ignore();
		}
	}
	fin.close();

	cout << "\n\tFile has been read successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findContact(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char input[30] = { '\0' };

	cout << "\n\tEnter the field by which you want to find the contact\n\t(eg: ID, First Name, Last Name, Middle Name, etc.): ";
	cin.ignore();
	cin.getline(input, 29);

	toLower(input);
	
	if (strcmp(input, "id") == 0) {
		findByID(fin, fout, list, size);
	}
	else if (strcmp(input, "first name") == 0) {
		findByFirstName(fin, fout, list, size);
	}
	else if (strcmp(input, "last name") == 0) {
		findByLastName(fin, fout, list, size);
	}
	else if (strcmp(input, "middle name") == 0) {
		findByMiddleName(fin, fout, list, size);
	}
	else if (strcmp(input, "home number") == 0) {
		findByHomeNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "home street number") == 0) {
		findByHomeStreet(fin, fout, list, size);
	}
	else if (strcmp(input, "home town") == 0) {
		findByHomeTown(fin, fout, list, size);
	}
	else if (strcmp(input, "home city") == 0) {
		findByHomeCity(fin, fout, list, size);
	}
	else if (strcmp(input, "home postal code") == 0) {
		findByHomePostal(fin, fout, list, size);
	}
	else if (strcmp(input, "home country") == 0) {
		findByHomeCountry(fin, fout, list, size);
	}
	else if (strcmp(input, "office number") == 0) {
		findByOfficeNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "office street number") == 0) {
		findByOfficeStreet(fin, fout, list, size);
	}
	else if (strcmp(input, "office town") == 0) {
		findByOfficeTown(fin, fout, list, size);
	}
	else if (strcmp(input, "office city") == 0) {
		findByOfficeCity(fin, fout, list, size);
	}
	else if (strcmp(input, "office postal code") == 0) {
		findByOfficePostal(fin, fout, list, size);
	}
	else if (strcmp(input, "office country") == 0) {
		findByOfficeCountry(fin, fout, list, size);
	}
	else if (strcmp(input, "country code") == 0) {
		findByCountryCode(fin, fout, list, size);
	}
	else if (strcmp(input, "city code") == 0) {
		findByCityCode(fin, fout, list, size);
	}
	else if (strcmp(input, "phone number") == 0) {
		findByPhoneNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "company code") == 0) {
		findByCompanyCode(fin, fout, list, size);
	}
	else if (strcmp(input, "cell number") == 0) {
		findByCellNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "email") == 0) {
		findByEmail(fin, fout, list, size);
	}
	else if (strcmp(input, "dob") == 0 || strcmp(input, "date of birth") == 0) {
		findByDOB(fin, fout, list, size);
	}
	else if (strcmp(input, "height") == 0) {
		findByHeight(fin, fout, list, size);
	}
	else if (strcmp(input, "edu") == 0 || strcmp(input, "education") == 0 || strcmp(input, "education level") == 0) {
		findByEdu(fin, fout, list, size);
	}
}

void findByID(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int num = 0;
	bool flag = 0;

	cout << "\n\tEnter the ID of the contact you want to find: ";
	cin >> num;

	for (int i = 0; i < size; i++) {
		if (list[i].id == num) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			break;
		}
		else {
			flag = 0;
		}
	}

	if (flag) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByFirstName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char firstName[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the First Name of the contact you want to find: ";
	cin.getline(firstName,19);

	toLower(firstName);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].firstName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, firstName) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByLastName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char lastName[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Last Name of the contact you want to find: ";
	cin.getline(lastName, 19);

	toLower(lastName);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].lastName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, lastName) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByMiddleName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char middleName[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Middle Name of the contact you want to find: ";
	cin.getline(middleName, 19);

	toLower(middleName);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].middleName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, middleName) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByHomeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int num = 0;
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Home Number of the contact you want to find: ";
	cin >> num;

	for (int i = 0; i < size; i++) {
		if (list[i].home == num) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByHomeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int num = 0;
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Home Street of the contact you want to find: ";
	cin >> num;

	for (int i = 0; i < size; i++) {
		if (list[i].homeStreet == num) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByHomeTown(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeTown[50] = { '\0' };
	char arrCopy[50] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Home Town of the contact you want to find: ";
	cin.getline(homeTown, 49);

	toLower(homeTown);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeTown, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeTown) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByHomeCity(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeCity[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Home City of the contact you want to find: ";
	cin.getline(homeCity, 19);

	toLower(homeCity);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeCity, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeCity) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByHomePostal(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int homePostal = 0;
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Home Postal Code of the contact you want to find: ";
	cin >> homePostal;

	for (int i = 0; i < size; i++) {
		if (list[i].homePostal == homePostal) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByHomeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeCountry[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Home Country of the contact you want to find: ";
	cin.getline(homeCountry, 19);

	toLower(homeCountry);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeCountry, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeCountry) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByOfficeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int num = 0;
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Office Number of the contact you want to find: ";
	cin >> num;

	for (int i = 0; i < size; i++) {
		if (list[i].office == num) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByOfficeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int num = 0;
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Office Street of the contact you want to find: ";
	cin >> num;

	for (int i = 0; i < size; i++) {
		if (list[i].officeStreet == num) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByOfficeTown(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeTown[50] = { '\0' };
	char arrCopy[50] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Office Town of the contact you want to find: ";
	cin.getline(officeTown, 49);

	toLower(officeTown);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeTown, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeTown) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByOfficeCity(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeCity[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Office City of the contact you want to find: ";
	cin.getline(officeCity, 19);

	toLower(officeCity);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeCity, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeCity) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByOfficePostal(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int officePostal = 0;
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Office Postal Code of the contact you want to find: ";
	cin >> officePostal;

	for (int i = 0; i < size; i++) {
		if (list[i].officePostal == officePostal) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByOfficeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeCountry[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Office Country of the contact you want to find: ";
	cin.getline(officeCountry, 19);

	toLower(officeCountry);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeCountry, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeCountry) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByCountryCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char countryCode[10] = { '\0' };
	char arrCopy[10] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Country Code of the contact's phone number you want to find: ";
	cin.getline(countryCode, 9);

	toLower(countryCode);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].countryCode, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, countryCode) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByCityCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int cityCode = 0;
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the City Code of the contact's phone number you want to find: ";
	cin >> cityCode;

	for (int i = 0; i < size; i++) {
		if (list[i].cityCode == cityCode) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByPhoneNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	long long int phoneNum = 0;
	bool flag = 0;

	cout << "\n\tEnter the Phone Number of the contact you want to find: ";
	cin >> phoneNum;

	for (int i = 0; i < size; i++) {
		if (list[i].phoneNum == phoneNum) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByCompanyCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char companyCode[10] = { '\0' };
	char arrCopy[10] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Company Code of the contact's phone number you want to find: ";
	cin.getline(companyCode, 9);

	toLower(companyCode);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].companyCode, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, companyCode) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByCellNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	long long int cellNum = 0;
	bool flag = 0;

	cout << "\n\tEnter the Cell Number of the contact you want to find: ";
	cin >> cellNum;

	for (int i = 0; i < size; i++) {
		if (list[i].cellNum == cellNum) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByEmail(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char email[50] = { '\0' };
	char arrCopy[50] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Email Address of the contact you want to find: ";
	cin.getline(email, 49);

	toLower(email);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].email, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, email) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByDOB(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char dob[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Date of Birth of the contact you want to find (eg: DD/MM/YYYY): ";
	cin.getline(dob, 19);

	toLower(dob);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].dob, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, dob) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByHeight(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	float height = 0;
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Height of the contact you want to find: ";
	cin >> height;

	for (int i = 0; i < size; i++) {
		if (list[i].height == height) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void findByEdu(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char edu[10] = { '\0' };
	char arrCopy[10] = { '\0' };
	bool flag = 0;
	int count = 0;

	cout << "\n\tEnter the Education Level of the contact you want to find: ";
	cin.getline(edu, 9);

	toLower(edu);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].edu, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, edu) == 0) {
			outputContact(fin, fout, list, size, i);
			flag = 1;
			count++;
		}
		clearArr(arrCopy);
	}

	if (flag && count == 1) {
		cout << "\n\tContact has been found successfully!\n\n\t";
	}
	else if (flag && count > 1) {
		cout << "\n\tMultiple Contacts have been found successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void writeFile(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char tempChar;

	fout.open("contact.txt");

	for (int i = 0; i < size; i++) {
		fout << list[i].id << ", ";

		fout << list[i].firstName << ", ";
		fout << list[i].lastName << ", ";
		fout << list[i].middleName << ", ";

		fout << list[i].home << ", ";;
		fout << list[i].homeStreet << ", ";;
		fout << list[i].homeTown << ", ";
		fout << list[i].homeCity << ", ";
		fout << list[i].homePostal << ", ";
		fout << list[i].homeCountry << ", ";

		fout << list[i].office << ", ";;
		fout << list[i].officeStreet << ", ";;
		fout << list[i].officeTown << ", ";
		fout << list[i].officeCity << ", ";
		fout << list[i].officePostal << ", ";
		fout << list[i].officeCountry << ", ";

		fout << list[i].countryCode << ", ";
		fout << list[i].cityCode << ", ";
		fout << list[i].phoneNum << ", ";

		fout << list[i].companyCode << ", ";
		fout << list[i].cellNum << ", ";

		fout << list[i].email << ", ";
		fout << list[i].dob << ", ";

		fout << list[i].height << ", ";
		fout << list[i].edu << ", ";

		fout << endl;
	}
	fout.close();

	cout << "\n\tFile has been written successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void addContact(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	list = regrowStruct(list, size);

	list[size-1].id = size;

	cin.ignore();

	cout << "\n\n\tEnter the First Name: ";
	cin.getline(list[size-1].firstName, 19);
	cout << "\tEnter the Last Name: ";
	cin.getline(list[size-1].lastName, 19);
	cout << "\tEnter the Middle Name: ";
	cin.getline(list[size-1].middleName, 19);

	cout << "\n\tEnter the Home Number: ";
	cin >> list[size-1].home;
	cout << "\tEnter the Home Street: ";
	cin >> list[size-1].homeStreet;
	cin.ignore();
	cout << "\tEnter the Home Town: ";
	cin.getline(list[size-1].homeTown, 49);
	cout << "\tEnter the Home City: ";
	cin.getline(list[size-1].homeCity, 19);
	cout << "\tEnter the Home Postal Code: ";
	cin >> list[size-1].homePostal;
	cin.ignore();
	cout << "\tEnter the Home Country: ";
	cin.getline(list[size-1].homeCountry, 19);

	cout << "\n\tEnter the Office Number: ";
	cin >> list[size-1].office;
	cout << "\tEnter the Office Street: ";
	cin >> list[size-1].officeStreet;
	cin.ignore();
	cout << "\tEnter the Office Town: ";
	cin.getline(list[size-1].officeTown, 49);
	cout << "\tEnter the Office City: ";
	cin.getline(list[size-1].officeCity, 19);
	cout << "\tEnter the Office Postal Code: ";
	cin >> list[size-1].officePostal;
	cin.ignore();
	cout << "\tEnter the Office Country: ";
	cin.getline(list[size-1].officeCountry, 19);

	cout << "\n\tEnter the Country Code: ";
	cin.getline(list[size-1].countryCode, 9);
	cout << "\tEnter the City Code: ";
	cin >> list[size-1].cityCode;
	cout << "\tEnter the Phone Number: ";
	cin >> list[size-1].phoneNum;
	cin.ignore();

	cout << "\n\tEnter the Company Code: ";
	cin.getline(list[size-1].companyCode, 9);
	cout << "\tEnter the Cell Number: ";
	cin >> list[size-1].cellNum;
	cin.ignore();

	cout << "\n\tEnter the Email Address: ";
	cin.getline(list[size-1].email, 49);
	cout << "\tEnter the Date of Birth: ";
	cin.getline(list[size-1].dob, 19);
	cout << "\tEnter the Height: ";
	cin >> list[size-1].height;
	cin.ignore();
	cout << "\tEnter the Education Level: ";
	cin.getline(list[size-1].edu, 9);

	cout << "\n\tContact has been added successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteContact(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char input[30] = { '\0' };

	cout << "\n\tEnter the field by which you want to delete the contact\n\t(eg: ID, First Name, Last Name, Middle Name, etc.): ";
	cin.ignore();
	cin.getline(input, 29);

	toLower(input);

	if (strcmp(input, "id") == 0) {
		deleteByID(fin, fout, list, size);
	}
	else if (strcmp(input, "first name") == 0) {
		deleteByFirstName(fin, fout, list, size);
	}
	else if (strcmp(input, "last name") == 0) {
		deleteByLastName(fin, fout, list, size);
	}
	else if (strcmp(input, "middle name") == 0) {
		deleteByMiddleName(fin, fout, list, size);
	}
	else if (strcmp(input, "home number") == 0) {
		deleteByHomeNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "home street number") == 0) {
		deleteByHomeStreet(fin, fout, list, size);
	}
	else if (strcmp(input, "home town") == 0) {
		deleteByHomeTown(fin, fout, list, size);
	}
	else if (strcmp(input, "home city") == 0) {
		deleteByHomeCity(fin, fout, list, size);
	}
	else if (strcmp(input, "home postal code") == 0) {
		deleteByHomePostal(fin, fout, list, size);
	}
	else if (strcmp(input, "home country") == 0) {
		deleteByHomeCountry(fin, fout, list, size);
	}
	else if (strcmp(input, "office number") == 0) {
		deleteByOfficeNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "office street number") == 0) {
		deleteByOfficeStreet(fin, fout, list, size);
	}
	else if (strcmp(input, "office town") == 0) {
		deleteByOfficeTown(fin, fout, list, size);
	}
	else if (strcmp(input, "office city") == 0) {
		deleteByOfficeCity(fin, fout, list, size);
	}
	else if (strcmp(input, "office postal code") == 0) {
		deleteByOfficePostal(fin, fout, list, size);
	}
	else if (strcmp(input, "office country") == 0) {
		deleteByOfficeCountry(fin, fout, list, size);
	}
	else if (strcmp(input, "country code") == 0) {
		deleteByCountryCode(fin, fout, list, size);
	}
	else if (strcmp(input, "city code") == 0) {
		deleteByCityCode(fin, fout, list, size);
	}
	else if (strcmp(input, "phone number") == 0) {
		deleteByPhoneNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "company code") == 0) {
		deleteByCompanyCode(fin, fout, list, size);
	}
	else if (strcmp(input, "cell number") == 0) {
		deleteByCellNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "email") == 0) {
		deleteByEmail(fin, fout, list, size);
	}
	else if (strcmp(input, "dob") == 0 || strcmp(input, "date of birth") == 0) {
		deleteByDOB(fin, fout, list, size);
	}
	else if (strcmp(input, "height") == 0) {
		deleteByHeight(fin, fout, list, size);
	}
	else if (strcmp(input, "edu") == 0 || strcmp(input, "education") == 0 || strcmp(input, "education level") == 0) {
		deleteByEdu(fin, fout, list, size);
	}
}

void deleteByID(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int num = 0;
	bool flag = 0;

	cout << "\n\tEnter the ID of the contact you want to delete: ";
	cin >> num;

	for (int i = 0; i < size; i++) {
		if (list[i].id == num && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].id == num) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}

	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByFirstName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char firstName[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the First Name of the contact you want to delete: ";
	cin.getline(firstName, 19);

	toLower(firstName);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].firstName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, firstName) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}
	copyArr(list[size - 1].firstName, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, firstName) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByLastName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char lastName[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Last Name of the contact you want to delete: ";
	cin.getline(lastName, 19);

	toLower(lastName);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].lastName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, lastName) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].lastName, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, lastName) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByMiddleName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char middleName[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Middle Name of the contact you want to delete: ";
	cin.getline(middleName, 19);

	toLower(middleName);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].middleName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, middleName) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].middleName, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, middleName) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByHomeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int home = 0;
	bool flag = 0;

	cout << "\n\tEnter the Home Number of the contact you want to delete: ";
	cin >> home;

	for (int i = 0; i < size; i++) {
		if (list[i].home == home && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].home == home) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}

	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByHomeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int homeStreet = 0;
	bool flag = 0;

	cout << "\n\tEnter the Home Street of the contact you want to delete: ";
	cin >> homeStreet;

	for (int i = 0; i < size; i++) {
		if (list[i].homeStreet == homeStreet && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].homeStreet == homeStreet) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}

	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByHomeTown(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeTown[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Home Town of the contact you want to delete: ";
	cin.getline(homeTown, 19);

	toLower(homeTown);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeTown, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeTown) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].homeTown, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, homeTown) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByHomeCity(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeCity[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Home City of the contact you want to delete: ";
	cin.getline(homeCity, 19);

	toLower(homeCity);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeCity, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeCity) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].homeCity, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, homeCity) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByHomePostal(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int homePostal = 0;
	bool flag = 0;

	cout << "\n\tEnter the Home Postal of the contact you want to delete: ";
	cin >> homePostal;

	for (int i = 0; i < size; i++) {
		if (list[i].homePostal == homePostal && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].homePostal == homePostal) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}

	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByHomeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeCountry[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Home Country of the contact you want to delete: ";
	cin.getline(homeCountry, 19);

	toLower(homeCountry);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeCountry, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeCountry) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].homeCountry, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, homeCountry) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByOfficeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int office = 0;
	bool flag = 0;

	cout << "\n\tEnter the Office Number of the contact you want to delete: ";
	cin >> office;

	for (int i = 0; i < size; i++) {
		if (list[i].office == office && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].office == office) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByOfficeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int officeStreet = 0;
	bool flag = 0;

	cout << "\n\tEnter the Office Street of the contact you want to delete: ";
	cin >> officeStreet;

	for (int i = 0; i < size; i++) {
		if (list[i].officeStreet == officeStreet && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].officeStreet == officeStreet) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByOfficeTown(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeTown[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Office Town of the contact you want to delete: ";
	cin.getline(officeTown, 19);

	toLower(officeTown);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeTown, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeTown) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].officeTown, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, officeTown) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByOfficeCity(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeCity[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Office City of the contact you want to delete: ";
	cin.getline(officeCity, 19);

	toLower(officeCity);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeCity, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeCity) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].officeCity, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, officeCity) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByOfficePostal(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int officePostal = 0;
	bool flag = 0;

	cout << "\n\tEnter the Office Postal of the contact you want to delete: ";
	cin >> officePostal;

	for (int i = 0; i < size; i++) {
		if (list[i].officePostal == officePostal && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].officePostal == officePostal) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByOfficeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeCountry[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Office Country of the contact you want to delete: ";
	cin.getline(officeCountry, 19);

	toLower(officeCountry);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeCountry, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeCountry) == 0 && i != (size - 1))	{
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].officeCountry, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, officeCountry) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByCountryCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char countryCode[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Country Code of the contact you want to delete: ";
	cin.getline(countryCode, 19);

	toLower(countryCode);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].countryCode, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, countryCode) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].countryCode, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, countryCode) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByCityCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int cityCode = 0;
	bool flag = 0;

	cout << "\n\tEnter the City Code of the contact you want to delete: ";
	cin >> cityCode;

	for (int i = 0; i < size; i++) {
		if (list[i].cityCode == cityCode && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].cityCode == cityCode) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByPhoneNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	long long int phoneNum = 0;
	bool flag = 0;

	cout << "\n\tEnter the Phone Number of the contact you want to delete: ";
	cin >> phoneNum;

	for (int i = 0; i < size; i++) {
		if (list[i].phoneNum == phoneNum && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].phoneNum == phoneNum) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByCompanyCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char companyCode[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Company Code of the contact you want to delete: ";
	cin.getline(companyCode, 19);

	toLower(companyCode);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].companyCode, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, companyCode) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].companyCode, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, companyCode) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByCellNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	long long int cellNum = 0;
	bool flag = 0;

	cout << "\n\tEnter the Cell Number of the contact you want to delete: ";
	cin >> cellNum;

	for (int i = 0; i < size; i++) {
		if (list[i].cellNum == cellNum && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].cellNum == cellNum) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByEmail(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char email[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Email Address of the contact you want to delete: ";
	cin.getline(email, 19);

	toLower(email);

	for (int i = 0; i < size; i++) {

		copyArr(list[i].email, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, email) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].email, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, email) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByDOB(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char dob[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Date of Birth of the contact you want to delete: ";
	cin.getline(dob, 19);

	toLower(dob);

	for (int i = 0; i < size; i++) {

		copyArr(list[i].dob, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, dob) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].dob, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, dob) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByHeight(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	float height = 0;
	bool flag = 0;

	cout << "\n\tEnter the Height of the contact you want to delete: ";
	cin >> height;

	for (int i = 0; i < size; i++) {
		if (list[i].height == height && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
	}

	if (flag || list[size - 1].height == height) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void deleteByEdu(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char edu[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Education Level of the contact you want to delete: ";
	cin.getline(edu, 19);

	toLower(edu);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].edu, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, edu) == 0 && i != (size - 1)) {
			for (int j = i; j < size - 1; j++)
				list[j] = list[j + 1];
			flag = 1;
		}
		clearArr(arrCopy);
	}

	copyArr(list[size - 1].edu, arrCopy);
	toLower(arrCopy);

	if (flag || strcmp(arrCopy, edu) == 0) {
		list = shrinkStruct(list, size);
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyContact(ifstream &fin, ofstream &fout, struct contact *list, int size) {

	char input[30] = { '\0' };

	cout << "\n\tEnter the field by which you want to modify the contact\n\t(eg: ID, First Name, Last Name, Middle Name, etc.): ";
	cin.ignore();
	cin.getline(input, 29);

	toLower(input);

	if (strcmp(input, "id") == 0) {
		modifyByID(fin, fout, list, size);
	}
	else if (strcmp(input, "first name") == 0) {
		modifyByFirstName(fin, fout, list, size);
	}
	else if (strcmp(input, "last name") == 0) {
		modifyByLastName(fin, fout, list, size);
	}
	else if (strcmp(input, "middle name") == 0) {
		modifyByMiddleName(fin, fout, list, size);
	}
	else if (strcmp(input, "home number") == 0) {
		modifyByHomeNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "home street number") == 0) {
		modifyByHomeStreet(fin, fout, list, size);
	}
	else if (strcmp(input, "home town") == 0) {
		modifyByHomeTown(fin, fout, list, size);
	}
	else if (strcmp(input, "home city") == 0) {
		modifyByHomeCity(fin, fout, list, size);
	}
	else if (strcmp(input, "home postal code") == 0) {
		modifyByHomePostal(fin, fout, list, size);
	}
	else if (strcmp(input, "home country") == 0) {
		modifyByHomeCountry(fin, fout, list, size);
	}
	else if (strcmp(input, "office number") == 0) {
		modifyByOfficeNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "office street number") == 0) {
		modifyByOfficeStreet(fin, fout, list, size);
	}
	else if (strcmp(input, "office town") == 0) {
		modifyByOfficeTown(fin, fout, list, size);
	}
	else if (strcmp(input, "office city") == 0) {
		modifyByOfficeCity(fin, fout, list, size);
	}
	else if (strcmp(input, "office postal code") == 0) {
		modifyByOfficePostal(fin, fout, list, size);
	}
	else if (strcmp(input, "office country") == 0) {
		modifyByOfficeCountry(fin, fout, list, size);
	}
	else if (strcmp(input, "country code") == 0) {
		modifyByCountryCode(fin, fout, list, size);
	}
	else if (strcmp(input, "city code") == 0) {
		modifyByCityCode(fin, fout, list, size);
	}
	else if (strcmp(input, "phone number") == 0) {
		modifyByPhoneNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "company code") == 0) {
		modifyByCompanyCode(fin, fout, list, size);
	}
	else if (strcmp(input, "cell number") == 0) {
		modifyByCellNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "email") == 0) {
		modifyByEmail(fin, fout, list, size);
	}
	else if (strcmp(input, "dob") == 0 || strcmp(input, "date of birth") == 0) {
		modifyByDOB(fin, fout, list, size);
	}
	else if (strcmp(input, "height") == 0) {
		modifyByHeight(fin, fout, list, size);
	}
	else if (strcmp(input, "edu") == 0 || strcmp(input, "education") == 0 || strcmp(input, "education level") == 0) {
		modifyByEdu(fin, fout, list, size);
	}
}

void modifyByID(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int num = 0;
	int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the ID of the contact you want to modify: ";
	cin >> num;

	cout << "\n\tEnter the updated ID of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].id == num) {
			list[i].id = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByFirstName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char firstName[20] = { '\0' };
	char name[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the First Name of the contact you want to modify: ";
	cin.getline(firstName, 19);

	toLower(firstName);

	cout << "\n\tEnter the updated First Name of the contact: ";
	cin.getline(name, 19);

	name[0] = toupper(name[0]);

	for (int i = 0; i < size; i++) {

		copyArr(list[i].firstName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, firstName) == 0) {
			strcpy_s(list[i].firstName, name);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByLastName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char lastName[20] = { '\0' };
	char name[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Last Name of the contact you want to modify: ";
	cin.getline(lastName, 19);

	toLower(lastName);

	cout << "\n\tEnter the updated Last Name of the contact: ";
	cin.getline(name, 19);

	name[0] = toupper(name[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].lastName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, lastName) == 0)	{
			strcpy_s(list[i].lastName, name);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByMiddleName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char middleName[20] = { '\0' };
	char name[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Middle Name of the contact you want to modify: ";
	cin.getline(middleName, 19);

	toLower(middleName);

	cout << "\n\tEnter the updated Middle Name of the contact: ";
	cin.getline(name, 19);

	name[0] = toupper(name[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].middleName, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, middleName) == 0) {
			strcpy_s(list[i].middleName, name);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByHomeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int home = 0;
	int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Home Number of the contact you want to delete: ";
	cin >> home;

	cout << "\n\tEnter the updated Home Number of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].home == home) {
			list[i].home = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByHomeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int homeStreet = 0;
	int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Home Street of the contact you want to delete: ";
	cin >> homeStreet;

	cout << "\n\tEnter the updated Home Street of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].homeStreet == homeStreet) {
			list[i].homeStreet = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByHomeTown(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeTown[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Home Town of the contact you want to modify: ";
	cin.getline(homeTown, 19);

	toLower(homeTown);

	cout << "\n\tEnter the updated Home Town of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeTown, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeTown) == 0) {
			strcpy_s(list[i].homeTown, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByHomeCity(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeCity[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Home City of the contact you want to modify: ";
	cin.getline(homeCity, 19);

	toLower(homeCity);
	
	cout << "\n\tEnter the updated Home City of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeCity, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeCity) == 0) {
			strcpy_s(list[i].homeCity, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByHomePostal(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int homePostal = 0;
	int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Home Postal Code of the contact you want to delete: ";
	cin >> homePostal;

	cout << "\n\tEnter the updated Home Postal Code of the contact: ";
	cin >> input;


	for (int i = 0; i < size; i++) {
		if (list[i].homePostal == homePostal) {
			list[i].homePostal = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByHomeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char homeCountry[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Home Country of the contact you want to modify: ";
	cin.getline(homeCountry, 19);

	toLower(homeCountry);

	cout << "\n\tEnter the updated Home Country of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].homeCountry, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, homeCountry) == 0) {
			strcpy_s(list[i].homeCountry, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByOfficeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int office = 0;
	int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Office Number of the contact you want to delete: ";
	cin >> office;

	cout << "\n\tEnter the updated Office Number of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].office == office) {
			list[i].office = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByOfficeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int officeStreet = 0;
	int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Office Street of the contact you want to delete: ";
	cin >> officeStreet;

	cout << "\n\tEnter the updated Office Street of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].officeStreet == officeStreet) {
			list[i].officeStreet = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByOfficeTown(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeTown[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Office Town of the contact you want to modify: ";
	cin.getline(officeTown, 19);

	toLower(officeTown);

	cout << "\n\tEnter the updated Office Town of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeTown, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeTown) == 0) {
			strcpy_s(list[i].officeTown, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByOfficeCity(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeCity[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Office City of the contact you want to modify: ";
	cin.getline(officeCity, 19);

	toLower(officeCity);

	cout << "\n\tEnter the updated Office City of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeCity, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeCity) == 0) {
			strcpy_s(list[i].officeCity, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByOfficePostal(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int officePostal = 0;
	int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Office Postal Code of the contact you want to delete: ";
	cin >> officePostal;

	cout << "\n\tEnter the updated Office Postal Code of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].officePostal == officePostal) {
			list[i].officePostal = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been deleted successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByOfficeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char officeCountry[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Office Country of the contact you want to modify: ";
	cin.getline(officeCountry, 19);

	toLower(officeCountry);

	cout << "\n\tEnter the updated Office Country of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].officeCountry, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, officeCountry) == 0) {
			strcpy_s(list[i].officeCountry, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByCountryCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char countryCode[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;
	
	cout << "\n\tEnter the Country Code of the contact you want to modify: ";
	cin.getline(countryCode, 19);

	toLower(countryCode);

	cout << "\n\tEnter the updated Country Code of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].countryCode, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, countryCode) == 0) {
			strcpy_s(list[i].countryCode, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByCityCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	int cityCode = 0;
	int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the City Code of the contact you want to delete: ";
	cin >> cityCode;

	cout << "\n\tEnter the updated City Code of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].cityCode == cityCode) {
			list[i].cityCode = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByPhoneNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	long long int phoneNum = 0;
	long long int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Phone Number of the contact you want to delete: ";
	cin >> phoneNum;

	cout << "\n\tEnter the updated Phone Number of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].phoneNum == phoneNum) {
			list[i].phoneNum = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByCompanyCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char companyCode[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Company Code of the contact you want to modify: ";
	cin.getline(companyCode, 19);

	toLower(companyCode);

	cout << "\n\tEnter the updated Company Code of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].companyCode, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, companyCode) == 0) {
			strcpy_s(list[i].companyCode, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByCellNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	long long int cellNum = 0;
	long long int input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Cell Number of the contact you want to delete: ";
	cin >> cellNum;

	cout << "\n\tEnter the updated Cell Number of the contact: ";
	cin >> input;

	for (int i = 0; i < size; i++) {
		if (list[i].cellNum == cellNum) {
			list[i].cellNum = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByEmail(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char email[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Email Address of the contact you want to modify: ";
	cin.getline(email, 19);

	toLower(email);

	cout << "\n\tEnter the updated Email Address of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].email, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, email) == 0) {
			strcpy_s(list[i].email, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByDOB(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char dob[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Date of Birth of the contact you want to modify: ";
	cin.getline(dob, 19);

	toLower(dob);

	cout << "\n\tEnter the updated Date of Birth of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].dob, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, dob) == 0) {
			strcpy_s(list[i].dob, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByHeight(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	float height = 0;
	float input = 0;
	bool flag = 0;

	cout << "\n\tEnter the Height of the contact you want to delete: ";
	cin >> height;

	cout << "\n\tEnter the updated Height of the contact: ";
	cin >> height;

	for (int i = 0; i < size; i++) {
		if (list[i].height == height) {
			list[i].height = input;
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void modifyByEdu(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char edu[20] = { '\0' };
	char word[20] = { '\0' };
	char arrCopy[20] = { '\0' };
	bool flag = 0;

	cout << "\n\tEnter the Education Level of the contact you want to modify: ";
	cin.getline(edu, 19);

	toLower(edu);

	cout << "\n\tEnter the updated Education Level of the contact: ";
	cin.getline(word, 19);

	word[0] = toupper(word[0]);

	for (int i = 0; i < size; i++) {
		copyArr(list[i].edu, arrCopy);
		toLower(arrCopy);

		if (strcmp(arrCopy, edu) == 0) {
			strcpy_s(list[i].edu, word);
			flag = 1;
			break;
		}
		clearArr(arrCopy);
	}

	if (flag) {
		cout << "\n\tContact has been modified successfully!\n\n\t";
	}
	else {
		cout << "\n\tContact does not exist!\n\n\t";
	}
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortContact(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	char input[30] = { '\0' };

	cout << "\n\tEnter the field by which you want to sort the contact\n\t(eg: ID, First Name, Last Name, Middle Name, etc.): ";
	cin.ignore();
	cin.getline(input, 29);

	toLower(input);

	if (strcmp(input, "id") == 0) {
		sortByID(fin, fout, list, size);
	}
	else if (strcmp(input, "first name") == 0) {
		sortByFirstName(fin, fout, list, size);
	}
	else if (strcmp(input, "last name") == 0) {
		sortByLastName(fin, fout, list, size);
	}
	else if (strcmp(input, "middle name") == 0) {
		sortByMiddleName(fin, fout, list, size);
	}
	else if (strcmp(input, "home number") == 0) {
		sortByHomeNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "home street number") == 0) {
		sortByHomeStreet(fin, fout, list, size);
	}
	else if (strcmp(input, "home town") == 0) {
		sortByHomeTown(fin, fout, list, size);
	}
	else if (strcmp(input, "home city") == 0) {
		sortByHomeCity(fin, fout, list, size);
	}
	else if (strcmp(input, "home postal code") == 0) {
		sortByHomePostal(fin, fout, list, size);
	}
	else if (strcmp(input, "home country") == 0) {
		sortByHomeCountry(fin, fout, list, size);
	}
	else if (strcmp(input, "office number") == 0) {
		sortByOfficeNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "office street number") == 0) {
		sortByOfficeStreet(fin, fout, list, size);
	}
	else if (strcmp(input, "office town") == 0) {
		sortByOfficeTown(fin, fout, list, size);
	}
	else if (strcmp(input, "office city") == 0) {
		sortByOfficeCity(fin, fout, list, size);
	}
	else if (strcmp(input, "office postal code") == 0) {
		sortByOfficePostal(fin, fout, list, size);
	}
	else if (strcmp(input, "office country") == 0) {
		sortByOfficeCountry(fin, fout, list, size);
	}
	else if (strcmp(input, "country code") == 0) {
		sortByCountryCode(fin, fout, list, size);
	}
	else if (strcmp(input, "city code") == 0) {
		sortByCityCode(fin, fout, list, size);
	}
	else if (strcmp(input, "phone number") == 0) {
		sortByPhoneNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "company code") == 0) {
		sortByCompanyCode(fin, fout, list, size);
	}
	else if (strcmp(input, "cell number") == 0) {
		sortByCellNumber(fin, fout, list, size);
	}
	else if (strcmp(input, "email") == 0) {
		sortByEmail(fin, fout, list, size);
	}
	else if (strcmp(input, "dob") == 0 || strcmp(input, "date of birth") == 0) {
		sortByDOB(fin, fout, list, size);
	}
	else if (strcmp(input, "height") == 0) {
		sortByHeight(fin, fout, list, size);
	}
	else if (strcmp(input, "edu") == 0 || strcmp(input, "education") == 0 || strcmp(input, "education level") == 0) {
		sortByEdu(fin, fout, list, size);
	}
}

void sortByID(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].id < list[j].id) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByFirstName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].firstName);
			toLower(list[j].firstName);

			if (list[i].firstName[0] < list[j].firstName[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].firstName[0]);
			list[j].edu[0] = toupper(list[j].firstName[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByLastName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].lastName);
			toLower(list[j].lastName);

			if (list[i].lastName[0] < list[j].lastName[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].lastName[0]);
			list[j].edu[0] = toupper(list[j].lastName[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByMiddleName(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].middleName);
			toLower(list[j].middleName);

			if (list[i].middleName[0] < list[j].middleName[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].middleName[0]);
			list[j].edu[0] = toupper(list[j].middleName[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByHomeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].home < list[j].home) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByHomeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].homeStreet < list[j].homeStreet) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByHomeTown(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].homeTown);
			toLower(list[j].homeTown);

			if (list[i].homeTown[0] < list[j].homeTown[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].homeTown[0]);
			list[j].edu[0] = toupper(list[j].homeTown[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByHomeCity(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].homeCity);
			toLower(list[j].homeCity);

			if (list[i].homeCity[0] < list[j].homeCity[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].homeCity[0]);
			list[j].edu[0] = toupper(list[j].homeCity[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByHomePostal(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].homePostal < list[j].homePostal) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByHomeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].homeCountry);
			toLower(list[j].homeCountry);

			if (list[i].homeCountry[0] < list[j].homeCountry[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].homeCountry[0]);
			list[j].edu[0] = toupper(list[j].homeCountry[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByOfficeNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].office < list[j].office) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByOfficeStreet(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].officeStreet < list[j].officeStreet) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByOfficeTown(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].officeTown);
			toLower(list[j].officeTown);

			if (list[i].officeTown[0] < list[j].officeTown[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].officeTown[0]);
			list[j].edu[0] = toupper(list[j].officeTown[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByOfficeCity(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].officeCity);
			toLower(list[j].officeCity);

			if (list[i].officeCity[0] < list[j].officeCity[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].officeCity[0]);
			list[j].edu[0] = toupper(list[j].officeCity[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByOfficePostal(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].officePostal < list[j].officePostal) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByOfficeCountry(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].officeCountry);
			toLower(list[j].officeCountry);

			if (list[i].officeCountry[0] < list[j].officeCountry[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].officeCountry[0]);
			list[j].edu[0] = toupper(list[j].officeCountry[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByCountryCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].countryCode);
			toLower(list[j].countryCode);

			if (list[i].countryCode[0] < list[j].countryCode[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].countryCode[0]);
			list[j].edu[0] = toupper(list[j].countryCode[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t"; 
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByCityCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].cityCode < list[j].cityCode) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByPhoneNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].phoneNum < list[j].phoneNum) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByCompanyCode(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].companyCode);
			toLower(list[j].companyCode);

			if (list[i].companyCode[0] < list[j].companyCode[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].companyCode[0]);
			list[j].edu[0] = toupper(list[j].companyCode[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByCellNumber(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].cellNum < list[j].cellNum) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByEmail(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].email);
			toLower(list[j].email);

			if (list[i].email[0] < list[j].email[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].email[0]);
			list[j].edu[0] = toupper(list[j].email[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByDOB(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].dob);
			toLower(list[j].dob);

			if (list[i].dob[0] < list[j].dob[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].dob[0]);
			list[j].edu[0] = toupper(list[j].dob[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByHeight(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (list[i].height < list[j].height) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void sortByEdu(ifstream &fin, ofstream &fout, struct contact *list, int size) {
	contact temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			toLower(list[i].edu);
			toLower(list[j].edu);

			if (list[i].edu[0] < list[j].edu[0]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}

			list[i].edu[0] = toupper(list[i].edu[0]);
			list[j].edu[0] = toupper(list[j].edu[0]);
		}
	}

	cout << "\n\tContact list has been sorted successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void outputContact(ifstream &fin, ofstream &fout, struct contact *list, int size, int index) {

	cout << "\n\t--------------------------";
	cout << "\n\t      Contact ID: " << list[index].id;
	cout << "\n\t--------------------------";

	cout << "\n\tFirst Name: " << list[index].firstName;
	cout << "\n\tLast Name: " << list[index].lastName;
	cout << "\n\tMiddle Name: " << list[index].middleName;

	cout << "\n\t--------------------------";
	cout << "\n\t      Home Address";
	cout << "\n\t--------------------------";
	cout << "\n\tHome Number: " << list[index].home;
	cout << "\n\tStreet Number: " << list[index].homeStreet;
	cout << "\n\tTown Name: " << list[index].homeTown;
	cout << "\n\tCity: " << list[index].homeCity;
	cout << "\n\tPostal Code: " << list[index].homePostal;
	cout << "\n\tCountry: " << list[index].homeCountry;

	cout << "\n\t--------------------------";
	cout << "\n\t      Office Address";
	cout << "\n\t--------------------------";
	cout << "\n\tHome Number: " << list[index].office;
	cout << "\n\tStreet Number: " << list[index].officeStreet;
	cout << "\n\tTown Name: " << list[index].officeTown;
	cout << "\n\tCity: " << list[index].officeCity;
	cout << "\n\tPostal Code: " << list[index].officePostal;
	cout << "\n\tCountry: " << list[index].officeCountry;

	cout << "\n\t--------------------------";
	cout << "\n\t     Home Phone Number";
	cout << "\n\t--------------------------";
	cout << "\n\tCountry Code: " << list[index].countryCode;
	cout << "\n\tCity Code: " << list[index].cityCode;
	cout << "\n\tNumber: " << list[index].phoneNum;

	cout << "\n\t--------------------------";
	cout << "\n\t        Cell Number";
	cout << "\n\t--------------------------";
	cout << "\n\tCompany Code: " << list[index].companyCode;
	cout << "\n\tNumber: " << list[index].cellNum;

	cout << "\n\t--------------------------";
	cout << "\n\t   Personal Information";
	cout << "\n\t--------------------------";
	cout << "\n\tEmail: " << list[index].email;
	cout << "\n\tDate of Birth: " << list[index].dob;
	cout << "\n\tHeight: " << list[index].height;
	cout << "\n\tEducational Level: " << list[index].edu;
	cout << "\n\t--------------------------";

	cout << endl << endl;

}

void printFile(ifstream &fin, ofstream &fout, struct contact *list, int size) {

	for (int i = 0; i < size; i++) {
		cout << "\n\t--------------------------";
		cout << "\n\t      Contact ID: " << list[i].id;
		cout << "\n\t--------------------------";

		cout << "\n\tFirst Name: " << list[i].firstName;
		cout << "\n\tLast Name: " << list[i].lastName;
		cout << "\n\tMiddle Name: " << list[i].middleName;

		cout << "\n\t--------------------------";
		cout << "\n\t      Home Address";
		cout << "\n\t--------------------------";
		cout << "\n\tHome Number: " << list[i].home;
		cout << "\n\tStreet Number: " << list[i].homeStreet;
		cout << "\n\tTown Name: " << list[i].homeTown;
		cout << "\n\tCity: " << list[i].homeCity;
		cout << "\n\tPostal Code: " << list[i].homePostal;
		cout << "\n\tCountry: " << list[i].homeCountry;

		cout << "\n\t--------------------------";
		cout << "\n\t      Office Address";
		cout << "\n\t--------------------------";
		cout << "\n\tHome Number: " << list[i].office;
		cout << "\n\tStreet Number: " << list[i].officeStreet;
		cout << "\n\tTown Name: " << list[i].officeTown;
		cout << "\n\tCity: " << list[i].officeCity;
		cout << "\n\tPostal Code: " << list[i].officePostal;
		cout << "\n\tCountry: " << list[i].officeCountry;

		cout << "\n\t--------------------------";
		cout << "\n\t     Home Phone Number";
		cout << "\n\t--------------------------";
		cout << "\n\tCountry Code: " << list[i].countryCode;
		cout << "\n\tCity Code: " << list[i].cityCode;
		cout << "\n\tNumber: " << list[i].phoneNum;

		cout << "\n\t--------------------------";
		cout << "\n\t        Cell Number";
		cout << "\n\t--------------------------";
		cout << "\n\tCompany Code: " << list[i].companyCode;
		cout << "\n\tNumber: " << list[i].cellNum;

		cout << "\n\t--------------------------";
		cout << "\n\t   Personal Information";
		cout << "\n\t--------------------------";
		cout << "\n\tEmail: " << list[i].email;
		cout << "\n\tDate of Birth: " << list[i].dob;
		cout << "\n\tHeight: " << list[i].height;
		cout << "\n\tEducational Level: " << list[i].edu;
		cout << "\n\t--------------------------";

		cout << endl << endl;
	}

	cout << "\n\tFile has been printed successfully!\n\n\t";
	system("PAUSE");

	main_menu(fin, fout, list, size);
}

void clearArr(char word[]) {
	for (int i = 0; word[i] != '\0'; i++) {
		word[i] = '\0';
	}
}

void copyArr(char word[], char temp[]) {
	for (int i = 0; word[i] != '\0'; i++) {
		temp[i] = word[i];
	}
}

void toLower(char word[]) {
	for (int i = 0; word[i] != '\0'; i++) {
		word[i] = tolower(word[i]);
	}
}

struct contact *regrowStruct(struct contact *list, int &size) {
	contact *temp = nullptr;

	temp = list;
	list = new struct contact[size + 1];

	for (int i = 0; i < size; i++) {
		list[i] = temp[i];
	}
	size++;

	delete[] temp;

	return list;
}

struct contact *shrinkStruct(struct contact *list, int &size) {
	contact *temp = nullptr;

	temp = list;
	list = new struct contact[size - 1];

	for (int i = 0; i < size - 1; i++) {
		list[i] = temp[i];
	}
	size--;

	delete[] temp;

	return list;
}